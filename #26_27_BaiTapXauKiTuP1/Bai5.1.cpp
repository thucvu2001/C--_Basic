#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     set<char> se;
//     for (auto x : s)
//     {
//         se.insert(x);
//     }
//     if (se.size() == 26)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
//     system("pause");
//     return 0;
// }

// cach 2: su dung mang dem
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int x : s)
    {
        a[x - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!a[i])
        {
            cout << "NO" << endl;
            system("pause");
            return 0;
        }
    }
    cout << "YES" << endl;
    system("pause");
    return 0;
}