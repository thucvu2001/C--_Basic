#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string ten, diaChi;
    int tuoi;
};

int main()
{
    SinhVien x;
    x.ten = "Vu Van Thuc";
    x.diaChi = "Nam Dinh";
    x.tuoi = 20;
    SinhVien* ptr = &x;
    cout << ptr->ten << " " << ptr->diaChi << " " << ptr->tuoi << endl;
    cout << (*ptr).ten << " " << (*ptr).diaChi << " " << (*ptr).tuoi << endl;
    return 0;
}