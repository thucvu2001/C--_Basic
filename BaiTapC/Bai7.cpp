#include <bits/stdc++.h>

using namespace std;

int prime[10001];
void sang()
{
    for (int i = 0; i < 10001; i++)
    {
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= sqrt(10000); i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= 10000; j += i)
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
        int n;
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (prime[i] && prime[n - i])
            {
                cout << i << " " << n - i << endl;
            }
        }
    }
    system("pause");
    return 0;
}