#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        map<char, int> mp;
        for (char x : s)
        {
            mp[x]++;
        }
        long long ans = s.length(); // cac xau co 1 ky tu tao thanh 1 TH thoa man
        for (auto it : mp)
        {
            ans += it.second * (it.second - 1) / 2; // cong thuc
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}