#include <bits/stdc++.h>

using namespace std;

int bac2(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i *= 2)
    {
        cnt += n / i;
    }
    return cnt;
}

int bac5(int n)
{
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        cnt += n / i;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = bac2(n);
        int y = bac5(n);
        cout << min(x, y) << endl;
    }
    system("pause");
    return 0;
}