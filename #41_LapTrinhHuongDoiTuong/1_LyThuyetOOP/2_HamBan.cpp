#include <bits/stdc++.h>
using namespace std;

// ham ban friend
class SV {
private:
    string name, ngaySinh;
    double d1, d2, d3;
public:
    friend void inThongTin(SV x);
};

void inThongTin(SV x)
{
    cout << x.name << " " << x.ngaySinh << " " << fixed << setprecision(1) << (x.d1 + x.d2 + x.d3) << endl;
}

int main()
{
    SV x;
    inThongTin(x);
    return 0;
}