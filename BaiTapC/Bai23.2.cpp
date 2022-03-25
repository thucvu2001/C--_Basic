// in ra so chinh phuong trong doan tu a den b
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c1 = sqrt(a);
        if (c1 * c1 != a)
        {
            ++c1;
        }
        int c2 = sqrt(b);
        for (int i = c1; i <= c2; i++)
        {
            cout << i * i << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}