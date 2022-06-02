#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}