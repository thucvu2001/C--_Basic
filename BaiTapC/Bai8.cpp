#include <bits/stdc++.h>

using namespace std;

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int chuSoNTo(int n)
{
    while (n)
    {
        int x = n % 10;
        if (x != 2 && x != 3 && x != 5 && x != 7)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int tongChuSoNTo(int n)
{
    int tong = 0;
    while (n)
    {
        tong += n % 10;
        n /= 10;
    }
    return nt(tong);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (chuSoNTo(i) && nt(i) && tongChuSoNTo(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}