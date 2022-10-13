#include <bits/stdc++.h>
using namespace std;

int d, s, t;

// Thuat toan Euclid mo rong
void extended(int a, int b)
{
    if (b == 0) {
        s = 1;
        t = 0;
        d = a;
    } else {
        extended(b, a % b);
        int tmp = t;
        t = s - a / b * t;
        s = tmp;
    }
}

int inverse(int a, int m)
{
    extended(a, m);
    if (d != 1) {
        return -1;
    } else {
        return (s % m + m) % m;
    }
}

// Ham kiem tra so nguyen to
bool prime(int n)
{
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int p, q, e;
    cout << "Nhap 2 so nguyen to p, q: ";
    cin >> p >> q;
    if (!prime(p) || !prime(q)) {
        cout << "Khong hop le!";
        return 0;
    }

    cout << "Nhap e: ";
    cin >> e;
    int n = p * q;
    cout << "n = p * q = " << n << endl;
    int y = (p - 1) * (q - 1);
    cout << "y = (p -1) * (q - 1) = " << y << endl;
    d = inverse(e, y);
    cout << "(" << e << ", " << n << ")" << endl;
    cout << "(" << d << ", " << n << ")" << endl;
    return 0;
}