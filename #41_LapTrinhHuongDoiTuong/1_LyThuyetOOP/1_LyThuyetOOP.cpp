#include <bits/stdc++.h>
using namespace std;

// Lap trinh huong doi tuong: Object Oriented Programing
// Class : Customer
// Object : Nguyen Van A, instance

// Datafield: truong du lieu, thuoc tinh
// Method: Phuong thuc, hanh dong

// Class Account
// -- username, password, email
// -- check login
// -- changePassword

class SinhVien {
private:
    string ten, ngaySinh, lop;
    double gpa;
    static string tenTruong; // bien static: dung chung cho tat ca cac đối tượng thuộc lớp SinhVien

public:
    // constructor mac dinh (khong co tham so)
    SinhVien()
    {
        cout << "constructor mac dinh cua lop Sinh Vien" << endl;
    }

    // constructor đầy đủ tham số:
    SinhVien(string ten, string ngaySinh, string lop, double gpa)
    {
        // con tro this
        this->ten = ten;
        this->ngaySinh = ngaySinh;
        this->lop = lop;
        this->gpa = gpa;
    }

    void xinChao()
    {
        cout << "Sinh vien xin chao" << endl;
    }
    void nhapThongTin();
    void xuatThongTin();

    // Getter, setter
    string getTen();
    string getTenTruong();
    void setTen(string newName);
    void setTenTruong(string tenTruongMoi);

    // destructor
    ~SinhVien()
    {
        cout << "doi tuong SinhVien da duoc huy" << endl;
    }
};

string SinhVien::tenTruong = "PTIT";

void SinhVien::nhapThongTin()
{
    getline(cin, ten);
    cin >> ngaySinh >> lop >> gpa;
}
void SinhVien::xuatThongTin()
{
    cout << ten << " " << ngaySinh << " " << lop << " " << gpa << endl;
}

// getter, setter
string SinhVien::getTen()
{
    return ten;
}
string SinhVien::getTenTruong()
{
    return tenTruong;
}
void SinhVien::setTen(string newName)
{
    ten = newName;
}
void SinhVien::setTenTruong(string tenTruongMoi)
{
    tenTruong = tenTruongMoi;
}

int main()
{
    SinhVien X;
    // SinhVien a[100]; // mang doi tuong

    SinhVien s; // constructor mac dinh
    SinhVien v("Vu Van Thuc", "31052002", "DTVT1", 3.2); // constructor day du tham so

    // method
    X.nhapThongTin();
    X.xuatThongTin();

    // getter, setter
    X.setTen("Vu Van Thuc");
    X.getTen();

    return 0;
}