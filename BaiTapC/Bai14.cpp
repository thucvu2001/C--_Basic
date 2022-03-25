#include <bits/stdc++.h>

using namespace std;

// phan tich 1 so thanh cac thua so nguyen to
void phanTich(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1)
    {
        cout << n << endl;
    }
}

void phanTich2(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cout << n << endl;
    }
}

void phanTich3(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i;
            n /= i;
            if (n != 1)
            {
                cout << "x";
            }
        }
    }
    if (n != 1)
    {
        cout << n << endl;
    }
}

void phanTich4(int n)
{
    cout << n << " = ";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << "^" << cnt;
            if (n != 1)
            {
                cout << "*";
            }
        }
    }
    if (n != 1)
    {
        cout << n << "^1";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        phanTich4(n);
    }
    system("pause");
    return 0;
}
