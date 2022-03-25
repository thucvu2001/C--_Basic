#include <bits/stdc++.h>

using namespace std;

int soDep(int n)
{
    int ok = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if (cnt == 1)
        {
            return 0;
        }
        if (cnt >= 2)
        {
            ok = 1;
        }
    }
    if (n != 1)
    {
        return 0;
    }
    return ok;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (soDep(i))
        {
            cout << i << " ";
        }
    }
    system("pause");
    return 0;
}