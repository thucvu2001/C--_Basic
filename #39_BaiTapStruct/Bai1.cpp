#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

struct phanSo {
    long long tu, mau;
};

void nhap(phanSo& p)
{
    cin >> p.tu >> p.mau;
}

void rutGon(phanSo& p)
{
    long long l = gcd(p.tu, p.mau);
    p.tu /= l;
    p.mau /= l;
}

void in(phanSo p)
{
    cout << p.tu << "/" << p.mau;
}

int main()
{
    phanSo p;
    nhap(p);
    rutGon(p);
    in(p);
    return 0;
}
