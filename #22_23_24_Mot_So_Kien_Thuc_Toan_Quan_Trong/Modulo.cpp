// (a + b) mod m = (a mod m + b mod m) mod m
// (a - b) mod m = (a mod m - b mod m) mod m
// (a * b) mod m = ((a mod m) * (b mod m)) mod m
// a^b mod m = (a mod m)^b mod m
// (a * b * c * d) mod m = ((a mod m) * (b mod m) * (c mod m) * (d mod m)) mod m
// su dung khi phép tính vượt quá long long
// vd: a = 10^16, b = 10^16, tinh (a * b) % (10^9 + 7)
// a * b > long long

#include <bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;

// modulo (a*b*c...) mod 1e9 + 7

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     long long res = 1;
//     for (int i = 0; i < n; i++)
//     {
//         res *= a[i];
//         res %= MOD;
//     }
//     cout << res % MOD << endl; // mod cuoi cung;
//     system("pause");
//     return 0;
// }

// (a^b) mod m;
int powMod1(int x, int y, int m)
{
    long long res = 1;
    for (int i = 1; i <= y; i++)
    {
        res *= x;
        res %= m;
    }
    return res;
}

// (a^b) mod m; su dung luy thua nhi phan
// a^b = a^(b/2) * a^(b/2)      ; nếu b chẵn
// a^b = a^(b/2) * a^(b/2) * a  ; nếu b lẻ
int powMod2(int x, int y, int m)
{
    long long res = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            res *= x;
            res %= m;
        }
        x *= x;
        x %= m;
        y /= 2;
    }
    return res;
}

// de quy
int powMod3(int x, int y, int m)
{
    if (y == 0)
    {
        return 1;
    }
    int tmp = powMod3(x, y / 2, m);
    if (y % 2 == 1)
    {
        return ((x % m) * (((tmp % m) * (tmp % m)) % m)) % m;
    }
    else
    {
        return (tmp * m) * (tmp % m) % m;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, m;
        cin >> x >> y >> m;
        cout << powMod1(x, y, m) << " " << powMod2(x, y, m) << " " << powMod3(x, y, m) << endl;
    }
    system("pause");
    return 0;
}