// tinh to hop chap k cua n (0 <= k,n <= 1000)
// ket qua lay du voi 1e9+7;

#include <bits/stdc++.h>

using namespace std;
const int MOD = (int)1e9 + 7;
int c[1000][1000];
// c[i][j]: to hop chap i cua j;

void init()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
                c[i][j] %= MOD;
            }
        }
    }
}

// tinh to hop chap k cua n (0 <= k,n <= 1000000)
// ket qua lay du voi 10^9+7;
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

// chi ap dung khi m la so nguyen to
long long inverse(long long a, long long m)
{
    return powMod(a, m - 2, m);
}

long long f[1000000]; // dung luu giai thua

int main()
{
    init();
    int n, k;
    cin >> n >> k;
    cout << c[n][k] << endl;

    // cach 2
    f[0] = 1; // 0! =1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = i * f[i - 1];
        f[i] %= MOD;
    }
    cout << f[n] % MOD * inverse(f[k] * f[n - k] % MOD, MOD) % MOD << endl;
    system("pause");
    return 0;
}