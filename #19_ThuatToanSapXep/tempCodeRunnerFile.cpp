#include <bits/stdc++.h>
using namespace std;

// tim kiem tuyen tinh
int SequentialSearch(int a[], int n, int x)
{
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // i la vi tri cua x trong day a[];
        }
    }
    return -1; // khong ton tai x trong day a[];
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int ans = SequentialSearch(a, n, x);
    if (ans == -1) {
        cout << "Khong Ton Tai!" << endl;
    } else {
        cout << "Phan tu " << x << "o vi tri thu " << ans + 1 << endl;
    }
    return 0;
}