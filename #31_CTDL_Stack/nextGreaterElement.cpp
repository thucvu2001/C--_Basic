// phần tử lớn hơn tiếp theo
// tìm phần tử lớn hơn gần nhất ngay sau phần tử đang xét, nếu k có in ra -1
// 3 4 2 5 1 6 2
// 4 5 5 6 6 -1 -1

#include <bits/stdc++.h>

using namespace std;

// cach 1:
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        int res = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                res = a[j];
                break;
            }
        }
        cout << res << " ";
    }
}

// cach 2: su dung stack
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n]; // luu ket qua
    for (int &x : a)
    {
        cin >> x;
    }
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(i); // luu chi so
        }
        else
        {
            while (!st.empty() && a[st.top()] < a[i])
            {
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (int x : b)
    {
        cout << x << " ";
    }
    system("pause");
    return 0;
}
