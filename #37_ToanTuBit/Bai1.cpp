// sinh ra tat cac tap con cua 1 tap hop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int& x : a)
        cin >> x;
    for (int i = 0; i < (1 << n); i++) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << a[j] << " ";
            }
        }
        cout << "}\n";
    }
    return 0;
}
