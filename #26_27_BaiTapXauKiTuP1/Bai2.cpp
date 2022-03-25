// tao email

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
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        cout << v[v.size() - 1]; // cout << v.back();
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << v[i][0];
        }
        cout << "@gmail.com" << endl;
    }
    system("pause");
    return 0;
}