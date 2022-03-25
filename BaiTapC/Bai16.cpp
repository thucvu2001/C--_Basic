#include <bits/stdc++.h>

using namespace std;

int phanTich(int n)
{
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        res++;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << phanTich(n) << endl;
    }
    system("pause");
    return 0;
}