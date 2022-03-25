#include <bits/stdc++.h>

using namespace std;

int cp(long long n)
{
    int can = sqrt(n) + 0.5;
    if (1ll * can * can == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (cp(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}