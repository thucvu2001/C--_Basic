#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    stack<int> st;
    int res = INT_MIN;
    int i = 0;
    while (i < n)
    {
        if (st.empty() || a[i] > +a[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            int idx = st.top(); // chi so cua cot o dinh stack
            st.pop();
            // tinh toan hcn tao boi cot hien tai, trong do cot hien tai duoc coi la cot ngan nhat cua hcn do
            if (st.empty())
            {
                res = max(res, i * a[idx]);
            }
            else
            {
                res = max(res, a[idx] * (i - st.top() - 1));
            }
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}
