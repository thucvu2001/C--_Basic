// bậc của thừa sô nguyên tố trong n giai thừa

#include <bits/stdc++.h>

using namespace std;

int count(int n, int p)
{
    int cnt = 0;
    for (int i = p; i <= n; i += p)
    {
        int tmp = i;
        while (tmp % p == 0)
        {
            cnt++;
            tmp /= p;
        }
    }
    return cnt;
}

int count2(int n, int p)
{
    int cnt = 0;
    for (int i = p; i <= n; i *= p)
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
        int n, p;
        cin >> n >> p;
        cout << count(n, p) << endl;
    }
    system("pause");
    return 0;
}