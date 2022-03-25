#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    // sd toán tử >>
    string word;
    int cnt = 0;
    vector<string> v;
    while (ss >> word)
    {
        v.push_back(word);
        cnt++;
    }
    cout << cnt << endl;
    for (string x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}