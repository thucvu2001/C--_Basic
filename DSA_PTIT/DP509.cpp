#include <bits/stdc++.h>
using namespace std;

long long dp[40];
void solve()
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 40; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main()
{
    solve();
    int n;
    cin >> n;
    cout << dp[n] << endl;
    return 0;
}