#include <bits/stdc++.h>
using namespace std;

struct sinhVien {
    string ten;
    string msv;
    double gpa;
    string diaChi;
};
struct sophuc {
    int a, b;
    sophuc operator+(const sophuc other)
    {
        sophuc tong;
        tong.a = a + other.a;
        tong.b = b + other.b;
        return tong;
    }
};

int main()
{
    sophuc a { 5, 10 }, b { 4, 5 };
    sophuc c = a + b;
    cout << c.a << " " << c.b;
    return 0;
}
