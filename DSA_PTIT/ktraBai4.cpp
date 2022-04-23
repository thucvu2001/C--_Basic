#include <bits/stdc++.h>
using namespace std;

void print(int a[], int n)
{
    if (n <= 1) {
        return;
    }
    sort(a, a + n);
    int mina = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        mina = min(mina, a[i] - a[i - 1]);
    }
    for (int i = 1; i < n; i++) {
        if ((a[i] - a[i - 1]) == mina) {
            cout << a[i - 1] << " " << a[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    print(a, n);
    return 0;
}