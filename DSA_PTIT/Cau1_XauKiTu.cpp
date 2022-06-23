#include <bits/stdc++.h>
using namespace std;

void check(string s1, string s2)
{
    if (s1.length() == 0 || s2.length() == 0) {
        cout << "0" << endl;
        return;
    }
    int k = 0;
    for (int i = 0; i < s2.length(); i++) {
        if (s1[k] == s2[i]) {
            k++;
            if (k == s1.length()) {
                cout << i - s1.length() + 1 << endl;
                return;
            }
        } else {
            k = 0;
        }
    }
    if (k == 0) {
        cout << "-1" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        check(s1, s2);
    }
    return 0;
}