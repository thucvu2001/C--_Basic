#include <bits/stdc++.h>

using namespace std;

int uocMax(int n)
{
    int tmp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tmp = i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        return n;
    }
    return tmp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << uocMax(n) << endl;
    }
    system("pause");
    return 0;
}