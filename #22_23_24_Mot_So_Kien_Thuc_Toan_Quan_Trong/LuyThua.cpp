// tinh a^b trong O(logn): luỹ thừa nhị phân
// a^b = a^(b/2) * a^(b/2)      ; nếu b chẵn
// a^b = a^(b/2) * a^(b/2) * a  ; nếu b lẻ

#include <bits/stdc++.h>

using namespace std;

// c1: cách thông thường: nhân a liên tục b lần
long long pow1(int a, int b)
{
    long long res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}

// c2:
long long pow2(int a, int b)
{
    long long res = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    return res;
}

// c3: su dung de quy
long long pow3(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    long long x = pow3(a, b / 2);
    if (b % 2 == 1)
    {
        return x * x * a;
    }
    else
        return x * x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << pow3(a, b) << endl;
    system("pause");
    return 0;
}