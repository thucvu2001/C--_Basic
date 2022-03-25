// kiểm tra dấu ngoặc hợp lệ
// (()()()) : hop le
// ((())) : hop le
// ((())( : khong hop le
// đưa dấu mở ngoặc vào, gặp 1 dấu đóng ngoặc thì xoá dấu mở ngoặc tương ứng, đến cuối thì kiểm tra stack rỗng thì hợp lệ, ngược lại thì không hợp lệ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char x : s)
    {
        if (x == '(')
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
            {
                cout << "INVALID\n";
                system("pause");
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout << "VALID\n";
    }
    else
    {
        cout << "INVALID\n";
    }
    system("pause");
    return 0;
}