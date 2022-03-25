// phan tich 1 so thanh cac thua so nguyen to
// vd: 84
// tim so nguyen to dau tien nho nhat ma 84 chia het: 2
// 84 : 2 = 42
// 42 : 2 = 21
// 21 : 3 = 7
// 84 = 2 x 2 x 3 x 7

#include <bits/stdc++.h>

using namespace std;

void pt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    { // cac thua so nguyen to trong khoang tu 2 den sqrt(n)
        while (n % i == 0)
        {                     // chia lien tiep cho thua so nguyen to nho nhat chia het
            cout << i << " "; // in ra thua so nguyen to
            n /= i;           // cap nhat gia tri moi cua n sau khi chia
        }
    }
    if (n != 1)
    { // kiem tra neu n cuoi cung > sqrt(n) thi in ra n, n la thua so nguyen to cuoi cung
        cout << n << " ";
    }
    cout << endl;
}

// ptich: moi thua so nguyen to chi in ra mot lan
void pt2(int n)
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
        cout << n << " ";
    }
    cout << endl;
}

// ptich: int ra kem theo luy thua cua thua so nguyen to
void pt3(int n)
{
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
            cout << i << "(" << cnt << ")"
                 << " ";
        }
    }
    if (n != 1)
    {
        cout << n << "(1)";
    }
}

void pt4(int n)
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
        cout << n;
    }
    cout << endl;
}

void pt5(int n)
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
    int n;
    cin >> n;
    pt5(n);
    system("pause");
    return 0;
}