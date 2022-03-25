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
        map<string, int> mp;
        string tmp;
        stringstream ss(s);
        while (ss >> tmp)
        {
            mp[tmp]++;
        }
        cout << mp.size() << endl;
    }
    system("pause");
    return 0;
}