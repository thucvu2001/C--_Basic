#include <bits/stdc++.h>

using namespace std;

// Bài toán sinh Hoán Vị
// thuật toán: tìm một số lớn hơn n mà nhỏ nhất có thể

int n;
int a[100];
int ok;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = i; // cau hinh dau tien;
    }
}

void sinh()
{
    int i = n - 1; // bắt đầu từ bit gần cuối, tìm vị trí a[i] < a[i+1];
    while (i >= 1 && a[i] > a[i + 1]) { // khi nào còn lớn hơn thì trừ
        --i;
    }
    if (i == 0) {
        ok = 0; // day la cau hinh cuoi cung
    } else {
        // di tim > a[i] nho nhat trong doan tu [i+1, n];
        int j = n;
        while (a[i] > a[j]) {
            --j;
        }
        swap(a[i], a[j]); // đổi chỗ sau đó đảo ngược;
        // dao nguoc
        int l = i + 1, r = n;
        while (l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
        // hoac co the dao nguoc bang reverse(a+i+1,a+n+1);
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

// co the su dung ham co san;
// next_permutation(a, a + n);
// prev_permutation(a, a + n);

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n;i++){
//         a[i] = i + 1;
//     }
//     do{
//         for (int i = 0; i < n;i++){
//             cout << a[i];
//         }
//         cout << endl;
//     } while (next_permutation(a, a + n));
//     system("pause");
//     return 0;
// }