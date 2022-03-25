
// so hoan hao
// su dung cong thuc:
// neu p la so nguyen to va (2^p)-1 cũng là số nguyên tố thì
// 2^(p-1) * (2^p)-1 là số hoàn hảo

// từ 1 đến 10^18 chỉ có 8 số hoàn hảo;

#include <bits/stdc++.h>

using namespace std;

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

long long a[10];
int n = 0;
void hoanHao()
{
    for (int i = 1; i <= 32; i++)
    {
        if (nt(i))
        {
            int tmp = (int)pow(2, i) - 1;
            if (nt(tmp))
            {
                a[n++] = 1ll * tmp * (int)pow(2, i - 1);
            }
        }
    }
}

int main()
{
    hoanHao();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ok = 0;
        for (int i = 0; i < 10; i++)
        {
            if (a[i] == n)
            {
                ok = 1;
                break;
            }
        }
        if (ok == 1)
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