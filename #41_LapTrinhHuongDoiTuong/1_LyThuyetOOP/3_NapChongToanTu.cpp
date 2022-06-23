#include <bits/stdc++.h>
using namespace std;

class SV {
private:
    string name, ngaySinh;
    double d1, d2, d3;

public:
    // nap chong toan tu nhap >>
    friend istream& operator>>(istream& in, SV& x)
    {
        getline(in, x.name);
        in >> x.ngaySinh >> x.d1 >> x.d2 >> x.d3;
        return in;
    }

    // nap chong toan tu xuat <<
    friend ostream& operator<<(ostream& out, SV x)
    {
        out << x.name << " " << x.ngaySinh << " " << fixed << setprecision(1) << (x.d1 + x.d2 + x.d3) << endl;
        return out;
    }

    // nap chong toan tu so sanh nho hon <
    bool operator<(SV khac)
    {
        return (this->d1 + this->d2 + this->d3) < (khac.d1 + khac.d2 + khac.d3);
    }

    // nap chong toan tu cong
    SV operator+(SV khac)
    {
        SV moi;
        moi.name = "Ten moi";
        moi.ngaySinh = "31052001";
        moi.d1 = this->d1 + khac.d1;
        moi.d2 = this->d2 + khac.d2;
        moi.d3 = this->d3 + khac.d3;
        return moi;
    }

    // cach 2 cua toan tu cong (chi su dung 1 trong 2)
    // friend SV operator + (SV a, SV b)
    // {
    //     SV moi;
    //     moi.name = "TenMoi";
    //     moi.ngaySinh = "31052001";
    //     moi.d1 = a.d1 + b.d1;
    //     moi.d2 = a.d2 + b.d2;
    //     moi.d3 = a.d3 + b.d3;
    //     return moi;
    // }

    // lay ra tong diem de sap xep sinh vien
    double getTongDiem()
    {
        return this->d1 + this->d2 + this->d3;
    }
};

bool cmp(SV a, SV b)
{
    return a.getTongDiem() < b.getTongDiem();
}

int main()
{
    SV x, y;
    cin >> x; // sau khi nap chong thi co the cin, cout
    getchar();
    cin >> y;
    cout << x;
    SV tmp = x + y; // sau khi nap chong toan tu cong co the cong 2 SV
    cout << tmp << endl;

    // sap xep sinh vien theo thu tu tong diem tang dan
    int n;
    cin >> n;
    SV a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}