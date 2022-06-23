#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string hoTen, ngaySinh;
    double diemMon1, diemMon2, diemMon3;

public:
    SinhVien() { }
    SinhVien(string hoTen, string ngaySinh, double diemMon1, double diemMon2, double diemMon3)
    {
        this->hoTen = hoTen;
        this->ngaySinh = ngaySinh;
        this->diemMon1 = diemMon1;
        this->diemMon2 = diemMon2;
        this->diemMon3 = diemMon3;
    }
    void in()
    {
        double tong = (diemMon1 + diemMon2 + diemMon3);
        cout << hoTen << " " << ngaySinh << " " << fixed << setprecision(1) << tong << endl;
    }
    ~SinhVien() { }
};

int main()
{
    string ten, ns;
    double diem1, diem2, diem3;
    getline(cin, ten);
    cin >> ns >> diem1 >> diem2 >> diem3;
    SinhVien a(ten, ns, diem1, diem2, diem3);
    a.in();
    return 0;
}