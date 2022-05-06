#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);
    char c[1001];
    for(int i = 0; i < s.length(); i++){
        c[i] = s[i];
    }
    for(int i = 0; i < s.length(); i++){
        cout << c[i];
    }
    return 0;
}