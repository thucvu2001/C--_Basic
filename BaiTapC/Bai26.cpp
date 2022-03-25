// kiem tra 1 so xem so luong uoc cua so do co phai la so le hay k
// suy ra so do la so chinh phuong

#include <bits/stdc++.h>

using namespace std;

int cp(long long n)
{
    int can = sqrt(n);
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
        int n;
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