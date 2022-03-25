#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int cnt[256];
        memset(cnt, 0, sizeof(cnt));
        int dem = 0;
        for (int j = i; j < s.length(); j++)
        {
            if (cnt[s[j]] == 0)
            {
                dem++;
            }
            if (dem == k)
            {
                ans++;
            }
            if (dem > k)
            {
                break;
            }
            cnt[s[j]] = 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    system("pause");
    return 0;
}