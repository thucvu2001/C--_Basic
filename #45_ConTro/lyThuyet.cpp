#include <bits/stdc++.h>
using namespace std;

void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << (a + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << &a[i] << " ";
    }
    return 0;
}
