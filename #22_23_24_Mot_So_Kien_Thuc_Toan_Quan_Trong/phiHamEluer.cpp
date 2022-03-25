// phi ham Euler: cho 1 so n, dem so luong so nguyen to cung nhau voi n không vượt quá n

#include <bits/stdc++.h>

using namespace std;

// ham tim UCLN
long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// c1: su dung ham thong thuong: duyet tu 1 den n;
long long count(long long n)
{
    long long res = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (gcd(i, n) == 1)
        {
            res++;
        }
    }
    return res;
}

// c2: su dung phi ham Euler
// phan tich n thanh cac thua so nguyen to;
// so nt cung nhau voi n = n*(1-1/p)*...
// p la cac thua so nguyen to (khong lap lai, vd 8 = 2.2.2 = 2^3 => 8*(1-1/2))
#define ll long long
ll Euler(ll n)
{
    ll res = n; // khoi tao = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            res -= res / i; // cong thuc phi ham Euler
        }
    }
    if (n != 1)
    {
        res -= res / n;
    }
    return res;
}

int main()
{
    long long n;
    cin >> n;
    cout << Euler(n) << endl;
    system("pause");
    return 0;
}