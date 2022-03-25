#include <bits/stdc++.h>

using namespace std;

// co the su dung ly thuyet tinh uoc so nguyen to cua 1 so
int count(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt != 0)
        {
            res *= (cnt + 1);
        }
    }
    if (n != 1)
    {
        res *= 2;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i != n / i)
                {
                    cnt += 2;
                }
                else
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}