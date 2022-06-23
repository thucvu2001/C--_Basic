#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        priority_queue<long long, vector<long long>, greater<long long>> Q;
        int n;
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            Q.push(x);
        }
        while (Q.size() > 1) {
            long long a = Q.top();
            Q.pop();
            long long b = Q.top();
            Q.pop();
            ans += a + b;
            Q.push(a + b);
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}