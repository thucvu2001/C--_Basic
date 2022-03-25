#include <bits/stdc++.h>

using namespace std;

int a[1000001];
void sang()
{
    for (int i = 0; i < 1000001; i++)
    {
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                a[j] = 0;
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
        if (a[n] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    system("paues");
    return 0;
}