#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> se;
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size() << endl;
    system("pause");
    return 0;
}