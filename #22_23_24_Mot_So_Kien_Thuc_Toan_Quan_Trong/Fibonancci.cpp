// dãy fibonancci: 0 1 1 2 3 5 8 13 21 ...

#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
    cout << endl;
    cout << "0\n1\n"; // in ra 2 so dau tien
    long long fn2 = 0, fn1 = 1;
    for (int i = 3; i <= n; i++) // duyệt từ số thứ 3
    {
        long long fn = fn2 + fn1;
        cout << fn << endl;
        fn2 = fn1;
        fn1 = fn;
    }
}

void solve2(int n)
{
    long long fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << fibo[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    solve2(n);
    system("pause");
    return 0;
}