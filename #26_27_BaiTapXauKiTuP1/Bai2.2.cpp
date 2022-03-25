// tao email va xu ly email trung
// them so vao email trung thu 2 tro di

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string tmp;
        string res = "";
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        res += v[v.size() - 1];
        // cout << v[v.size() - 1]; // cout << v.back();
        for (int i = 0; i < v.size() - 1; i++)
        {
            // cout << v[i][0];
            res += v[i][0];
        }
        if (mp[res] == 0) // mp.find(res) == mp.end() // mp.count(res) == 0
        {
            cout << res << "@gmail.com" << endl;
        }
        else
        {
            cout << res << mp[res] + 1 << "@gmail.com" << endl;
        }
        mp[res]++;
    }
    system("pause");
    return 0;
}