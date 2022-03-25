// đếm tần suất xuất hiện của kí tự nhiều nhất;
// so sánh với tổng số lượng các kí tự còn lại
// nếu <= số lượng kí tự còn lại => YES; else NO;

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (char x : s)
    {
        a[x - 'a']++;
    }
    int max_val = *max_element(a, a + 26);
    if (s.length() - max_val >= max_val - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    system("pause");
    return 0;
}