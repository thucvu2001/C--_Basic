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
        cin >> s;
        int k;
        cin >> k;
        if (s.size() < 26)
        {
            continue;
            // bo qua vi so luong phan thu cua s khong du 26
            // continue se chuyen sang test tiep theo
        }
        set<char> se;
        for (char x : s)
        {
            se.insert(x);
        }
        if (26 - se.size() <= k)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    system("pause");
    return 0;
}