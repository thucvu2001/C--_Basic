#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    int n; // so luong phan tu
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // nhap vao cac phan tu
    }
    long long tong = 0;
    for (int i = 0; i < n; i++) {
        if (prime(a[i])) {
            cout << i + 1 << " ";
            tong += a[i];
        }
    }
    cout << endl;
    cout << tong << endl;
    return 0;
}