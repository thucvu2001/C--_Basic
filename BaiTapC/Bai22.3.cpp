#include <bits/stdc++.h>

using namespace std;

int thuanNhgich(int n)
{
    int x = n;
    int tmp = 0;
    while (n != 0)
    {
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp == x;
}

int thuanNghich2(char c[])
{
    int l = 0, r = strlen(c) - 1;
    while (l < r)
    {
        if (c[l] != c[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << thuanNhgich(n) << endl;
    }
    system("pause");
    return 0;
}