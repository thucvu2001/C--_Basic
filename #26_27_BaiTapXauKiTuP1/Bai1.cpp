#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string word;
    cin >> word;
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        if (tmp != word)
        {
            cout << tmp << " ";
            v.push_back(tmp);
        }
    }
    cout << endl;
    for (auto x : v) // int i=0;i<v.size();i++
    {
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}