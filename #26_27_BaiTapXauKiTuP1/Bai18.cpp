#include <bits/stdc++.h>

using namespace std;

// tao ham tach cac tu trong string vao set;
// set sap xep cac phan tu theo bang chu cai va khong lap lai;
set<string> convert(string s)
{ // kieu tra ve la set<tring>
    stringstream ss(s);
    set<string> se;
    string tmp;
    while (ss >> tmp)
    {
        se.insert(tmp);
    }
    return se;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        set<string> se1 = convert(a);
        set<string> se2 = convert(b);
        for (string x : se1)
        {
            if (se2.find(x) == se2.end())
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}