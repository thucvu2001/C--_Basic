#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct PhanSo {
    int a, b; // a/b
    PhanSo() { }
    PhanSo(int x, int y)
    {
        a = x, b = y;
        toiGian();
    }
    void toiGian()
    {
        int gcd = __gcd(a, b);
        a /= gcd, b /= gcd;
    }
};

istream& operator>>(istream& is, PhanSo& ps)
{
    string s;
    is >> s;
    stringstream ss(s);
    string token;
    getline(ss, token, '/');
    ps.a = stoi(token);
    getline(ss, token, '/');
    ps.b = stoi(token);
    ps.toiGian();
    return is;
}

ostream& operator<<(ostream& os, const PhanSo& ps)
{
    if (ps.b == 1)
        os << ps.a;
    else
        os << ps.a << "/" << ps.b;
    return os;
}

bool operator==(const PhanSo& ps1, const PhanSo& ps2)
{
    return ps1.a == ps2.a && ps1.b == ps2.b;
}

bool operator<(const PhanSo& ps1, const PhanSo& ps2)
{
    return ps1.a * ps2.b < ps2.a * ps1.b;
}

bool operator>(const PhanSo& ps1, const PhanSo& ps2)
{
    return ps1.a * ps2.b > ps2.a * ps1.b;
}

PhanSo operator+(const PhanSo& ps1, const PhanSo& ps2)
{
    PhanSo ps(ps1.a * ps2.b + ps2.a * ps1.b, ps1.b * ps2.b);
    return ps;
}

template <typename T>
struct Mang {
    vector<T> a;
    Mang() { }
    void nhap(int n)
    {
        T x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a.push_back(x);
        }
    }
    void xuat()
    {
        for (T x : a)
            cout << x << " ";
    }
    T tongPhanTu()
    {
        T res = 0;
        for (T x : a)
            res = res + x;
        return res;
    }
    T phanTuMax()
    {
        return *max_element(a.begin(), a.end());
    }
    void sapXep(char c = '<')
    {
        sort(a.begin(), a.end(), [c](const T& x, const T& y) {
            if (c == '<')
                return x < y;
            else
                return x > y;
        });
    }
};

int main()
{
    char kieu;
    int n, m;
    cin >> kieu >> n;
    if (kieu == 'I') {
        Mang<int> m1;
        Mang<int> m2;
        m1.nhap(n);
        cin >> m;
        m2.nhap(m);
        m1.xuat();
        m1.sapXep();
        cout << endl;
        cout << "MAX 1 = " << m1.phanTuMax() << endl;
        cout << "SUM 1 = " << m1.tongPhanTu() << endl;
        vector<int> chan, le;
        for (int x : m1.a) {
            if (x % 2 == 0)
                chan.push_back(x);
            else
                le.push_back(x);
        }
        for (int x : chan) {
            cout << x << " ";
        }
        for (int x : le) {
            cout << x << " ";
        }
        cout << endl;
        m2.xuat();
        m2.sapXep();
        cout << endl;
        cout << "MAX 2 = " << m2.phanTuMax() << endl;
        cout << "SUM 2 = " << m2.tongPhanTu() << endl;
        vector<int> chan2, le2;
        for (int x : m2.a) {
            if (x % 2 == 0)
                chan2.push_back(x);
            else
                le2.push_back(x);
        }
        for (int x : chan2) {
            cout << x << " ";
        }
        for (int x : le2) {
            cout << x << " ";
        }
        cout << endl;
    } else if (kieu == 'F') {
        Mang<float> m2;
        m2.nhap(n);
        m2.xuat();
        m2.sapXep();
        cout << endl;
        cout << "MAX 2 = " << m2.phanTuMax() << endl;
        cout << "SUM 2 = " << m2.tongPhanTu() << endl;
    } else if (kieu == 'S') {
        Mang<string> m3;
        m3.nhap(n);
        m3.xuat();
        m3.sapXep();
        cout << endl;
        cout << "MAX 3 = " << m3.phanTuMax() << endl;
        cout << "SUM 3 = " << m3.tongPhanTu() << endl;
    }
    return 0;
}