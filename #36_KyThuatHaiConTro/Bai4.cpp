#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int& x : a)
        cin >> x;
    long long sum = 0;
    int l = 0, r = 0, ans = 0;
    for (r = 0; r < n; r++) {
        sum += a[r];
        while (sum > s) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
    return 0;
}
