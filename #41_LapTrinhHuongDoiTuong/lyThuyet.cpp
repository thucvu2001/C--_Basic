#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string id, ten, ns;
    double gpa;

public:
    SinhVien();
    SinhVien(string, string, string, double);
};
SinhVien::SinhVien(string ma, string name, string birth, double diem)
{
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
}
SinhVien::SinhVien()
{
    id = ten = ns = "";
    gpa = 0;
}
int main()
{
    SinhVien x;
    SinhVien y("403", "Vu Van Thuc", "31052001", 3.5);
    return 0;
}