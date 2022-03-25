#include <bits/stdc++.h>

using namespace std;

int prime[1000001];
void sang()
{
    for (int i = 0; i < 1000001; i++)
    {
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        int a = sqrt(l);
        if (1ll * a * a != l)
        {
            a++;
        }
        int cnt = 0;
        for (int i = a; i <= sqrt(r); i++)
        {
            if (prime[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}