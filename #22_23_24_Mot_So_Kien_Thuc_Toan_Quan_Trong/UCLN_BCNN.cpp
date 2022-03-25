#include <bits/stdc++.h>

using namespace std;

// uoc chung lon nhat
long long gcd(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

long long gcd2(long long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long gcd3(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// boi chung nho nhat = tich cua 2 so / UCLN
long long lcm(long long a, long long b)
{
    return (a * b) / gcd2(a, b);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << gcd2(a, b) << endl;
    system("pause");
    return 0;
}