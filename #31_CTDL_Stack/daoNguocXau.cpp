#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    stack<string> st;
    while (ss >> tmp)
    {
        st.push(tmp);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    system("pause");
    return 0;
}