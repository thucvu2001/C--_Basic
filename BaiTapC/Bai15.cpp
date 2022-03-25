// phan tich thua so nguyen to ket hop sang so nguyen to
#include <bits/stdc++.h>

using namespace std;

int prime[100001];
void sang()
{
    for (int i = 1; i <= 100000; i++)
    {
        prime[i] = i;
    }
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                if (prime[j] = j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}

void phanTich(int n)
{
    while (n != 1)
    {
        int cnt = 0;
        int tmp = prime[n];
        while (n % tmp == 0)
        {
            cnt++;
            n /= tmp;
        }
        cout << tmp << "(" << cnt << ")"
             << " ";
    }
    cout << endl;
}

void phanTich2(int n)
{
    while (n != 1)
    {
        cout << prime[n] << " ";
        n /= prime[n];
    }
    cout << endl;
}

int main()
{
    sang();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "TC" << i << ": ";
        phanTich2(n);
    }
    system("pause");
    return 0;
}