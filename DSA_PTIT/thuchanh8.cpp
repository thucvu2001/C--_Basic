#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
    int n, d;
    cin >> n >> d;
    for (int i = 1, x; i <= n && cin >> x; i++)
        a[i] = x, a[i + n] = x;
    for (int i = 1 + d; i <= n + d; i++)
        cout << a[i] << " ";
    return 0;
}
