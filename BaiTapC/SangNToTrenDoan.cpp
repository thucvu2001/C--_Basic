// sàng số nguyên tố trên đoạn [l, r];
// khời tạo mảng có l-r+1 phần tử

#include <bits/stdc++.h>

using namespace std;

// l = prime[0];
// l + 1 = prime[1];
// ...
// r = prime[r - 1];
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

void sang(int l, int r)
{
    int prime[r - l + 1];
    for (int i = 0; i < r - l + 1; i++)
    {
        prime[i] = 1;
    }
    for (int i = 2; i <= sqrt(r); i++)
    {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j+=i)
        {
            prime[j - l] = 0;
        }
    }
    for (int i = max(2, l); i <= r; i++)
    {
        if (prime[i - l])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int l, r;
    cin >> l >> r;
    sang(l, r);
    system("pause");
    return 0;
}