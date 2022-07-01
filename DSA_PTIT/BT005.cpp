#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        map<char, int> mp;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++) {
            mp[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++) {
            mp[b[i]]++;
        }
        for (auto it : mp) {
            cout << it.first << " " << it.second << endl;
        }
        cout << mp.size() << endl;
    }
    return 0;
}