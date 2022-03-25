#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;
long long f[1000001]; // O(n);
void init()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 1000001; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= MOD;
    }
}

// tinh so fibonancci bang nhan ma tran
// 1 1
// 1 0

// nhan 2 ma tran a voi b sau do luu ket qua cho ma tran a

void nhan(long long a[2][2], long long b[2][2])
{
    long long res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += (a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = res[i][j];
        }
    }
}

// tinh so fibonancci thu n
void pow1(long long n)
{
    long long res[2][2] = {{1, 0}, {0, 1}}; // ma tran don vi
    long long a[2][2] = {{1, 1}, {1, 0}};   // ma tran nhan
    while (n)
    {
        if (n % 2 == 1)
        {
            nhan(res, a);
        }
        nhan(a, a);
        n /= 2;
    }
    cout << res[0][1] << endl;
}

int main()
{
    long long n;
    cin >> n;
    pow1(n);
    system("pause");
    return 0;
}