#include <bits/stdc++.h>

using namespace std;

// Thuat toan sinh xau nhi phan
// VD: Input n = 3;
// Output:
// 000
// 001
// 010
// 011
// 100
// 101
// 110
// 111
//
// <Khoi tao cau hinh dau tien>
// while(<Khi chua phai cau hinh cuoi cung>){
//     <In ra cau hinh hien tai>
//     <Sinh cau hinh ke  tiep>
// }

int n, a[101], ok;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh()
{
    // Bat dau tu bit cuoi cung, va di tim bit 0 dau tien
    // Trong quá trình đi tìm bit 0 nếu gặp bit 1 thì chuyển bit 1 thành 0 và tiếp tục dịch sang trái;
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) {
        ok = 0; // day la cau hinh cuoi cung;
    } else {
        a[i] = 1;
    }
}

int main()
{
    cin >> n;
    ok = 1;
    khoiTao();
    while (ok == 1) {
        for (int i = 1; i <= n; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}
