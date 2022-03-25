#include <bits/stdc++.h>

using namespace std;

void chuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        vector<string> v;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        chuanHoa(v[v.size() - 1]);
        cout << v[v.size() - 1] << ", ";
        for (int i = 0; i < v.size() - 1; i++)
        {
            chuanHoa(v[i]);
            cout << v[i];
            if (i != v.size() - 2)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}