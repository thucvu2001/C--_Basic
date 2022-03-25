// tìm hệ số (x,y) t/m: a*x + b*y = gcd(a,b) (gcd là UCLN)
// vd: gcd(55, 80) = 5; => 55*3 + 80*(-2) = 5;

// a*x + b*y = gcd(a,b) = g
// gcd(a, b) = gcd(b, a mod b)
// => b * x + (a mod b) * y = g

// a mod b = a - [a/b] * b; [] là chia lấy phần nguyên
// => g = b * x1 + (a mod b) * y1
// => b * x1 + (a - [a / b] * b) * y1 = g;
// => x = y1; y = x1 - y1 * [a/b];

#include <bits/stdc++.h>

using namespace std;

int x, y, d;

void euclidExtened(int a, int b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a; // uoc chung lon nhat
    }
    else
    {
        euclidExtened(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    euclidExtened(a, b);
    cout << "Uoc chung lon nhat: " << d << endl;
    system("pause");
    return 0;
}