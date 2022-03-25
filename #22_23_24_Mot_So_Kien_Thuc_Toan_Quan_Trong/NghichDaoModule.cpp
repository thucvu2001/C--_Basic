// a * x === 1 mod m; a nhân x chia dư cho m bằng 1; a*x % m = 1;
// tồn tại nghich đảo module khi UCLN của a và m bằng 1; gcd(a,m) = 1

// a*x + m*y = 1;
// ax % m + my % m = 1 % m
// ax % m = 1;

#include <bits/stdc++.h>

using namespace std;

int x, y, d;
void extended(int a, int b) // giai thua Euclid mo rong
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }
    else
    {
        extended(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

void inverse(int a, int m)
{
    extended(a, m);
    if (d != 1)
    {
        cout << "khong ton tai";
    }
    else
    {
        cout << (x % m + m) % m << endl;
    }
}

// cach 2: chi ap dung khi m la snt
long long powMod(long long a, long long b, long long m)
{
    long long res = 1;
    a %= m;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

void inverse2(int a, int m)
{
    cout << powMod(a, m - 2, m) << endl;
}

int main()
{
    int a, m;
    cin >> a >> m;
    inverse(a, m); // vd 5, 9 => 2; (5 * 2) % 9 = 1;
    inverse2(a, m);
    system("pause");
    return 0;
}
