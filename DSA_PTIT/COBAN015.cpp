#include <bits/stdc++.h>
using namespace std;

int n, k;
bool check;
int a[1001];

int C(int n, int k)
{
    if (k == 0 || k == n) {
        return 1;
    }
    if (k == 1) {
        return n;
    }
    return C(k - 1, n - 1) + C(k, n - 1);
}

void khoiTao()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
    check = true;
}

void sinh()
{
    int i = k;
    while (i >= 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        khoiTao();
        cout << C(n, k) << endl;
        while (check) {
            cout << "[";
            for (int i = 1; i <= k; i++) {
                cout << a[i];
                if (i == k) {
                    cout << "]";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
            sinh();
        }
    }
    return 0;
}