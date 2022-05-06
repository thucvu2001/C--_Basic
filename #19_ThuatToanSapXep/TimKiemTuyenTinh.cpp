#include <bits/stdc++.h>
using namespace std;

int SequentialSearch(int a[], int l, int r, int x) // tim kiem x trong doan [l, r]
{
    for (int i = l; i <= r; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << SequentialSearch(a, 0, n - 1, x);
    return 0;
}