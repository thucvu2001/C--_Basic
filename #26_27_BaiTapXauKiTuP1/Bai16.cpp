#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int ans = 0;
    int sum = INT_MIN;
    for (char x : s)
    {
        if (isdigit(x))
        {
            ans = ans * 10 + x - '0';
        }
        else
        {
            sum = max(ans, sum);
            ans = 0;
        }
    }
    sum = max(ans, sum);
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    system("pause");
    return 0;
}