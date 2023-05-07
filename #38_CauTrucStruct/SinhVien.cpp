#include <bits/stdc++.h>

using namespace std;

struct SV {
    string hoten;
    int x, y, z;
};

istream& operator>>(istream& is, SV& sv)
{
    getline(is, sv.hoten);
    is >> sv.x >> sv.y >> sv.z;
    return is;
}
ostream& operator<<(ostream& os, SV sv)
{
    os << sv.hoten << endl;
    os << sv.x << " " << sv.y << " " << sv.z;
    return os;
}
bool operator<(SV sv1, SV sv2)
{
    return (float)(sv1.x + sv1.y + sv1.z) / 3 < (float)(sv2.x + sv2.y + sv2.z) / 3;
}
void nhap(SV& sv1, SV sv2)
{
    sv1.hoten = sv2.hoten;
    sv1.x = sv2.x;
    sv1.y = sv2.y;
    sv1.z = sv2.z;
}
int main()
{
    SV m[100];
    SV max;
    int n = 0;
    while (cin >> m[n]) {
        cin.ignore();
        n++;
    }
    nhap(max, m[0]);
    for (int i = 1; i < n; i++) {
        if (max < m[i]) {
            nhap(max, m[i]);
        }
    }
    cout << max.hoten;
    return 0;
}