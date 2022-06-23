
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 2;
    long long dp[1001];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i] += dp[i - j];
        }
    }
    cout << dp[n] << endl;
    return 0;
}