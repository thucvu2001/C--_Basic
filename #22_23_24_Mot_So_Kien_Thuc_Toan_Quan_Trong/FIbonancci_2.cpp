// kiểm tra 1 số có phải số fibonanacci hay không?
// c1: sử dụng công thức 5n^2 + 4 || 5^2 - 4 là số chính phương thì n là số fibonancci, (không áp dụng được với số lớn)

#include <bits/stdc++.h>

using namespace std;

int fibo1(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    long long fn2 = 0, fn1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        long long fn = fn2 + fn1;
        if (n == fn)
        {
            return 1;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

long long fb[100];
void fibo2()
{
    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}

int main()
{
    fibo2();
    long long n;
    cin >> n;
    if (fibo1(n) == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    int ok = 0;
    for (int i = 0; i <= 92; i++)
    {
        if (fb[i] == n)
        {
            ok = 1;
            break;
        }
    }
    if (ok == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}