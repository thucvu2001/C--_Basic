#include <bits/stdc++.h>
using namespace std;

// Bài Toán Sinh Tổ Hợp chập k của n;

int n, k;
int a[100]; // luu ket qua
int ok; // kiem tra gia tri cuoi cung

void khoiTao()
{
    for (int i = 1; i <= k; i++) {
        a[i] = i; // 123....k
    }
}

void sinh()
{
    int i = k;
    // n - k + i
    while (i >= 1 && a[i] == n - k + i) {
        --i; // tim bit thu i mà chưa đạt giá trị max là n-k+i
    }
    if (i == 0) {
        ok = 0; // day la cau hinh cuoi cung
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    cin >> k >> n; // to hop chap k cua n;
    ok = 1;
    khoiTao();
    while (ok == 1) {
        for (int i = 1; i <= k; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}