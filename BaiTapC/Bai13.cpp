#include <bits/stdc++.h>

using namespace std;

// cach1:
int find(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

// cach2:
// int find2(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n % 2 == 0)
//     {
//         return 2;
//     }
//     for (int i = 3; i <= n; i += 2)
//     {
//         if (n % i == 0)
//         {
//             return i;
//         }
//     }
// }

// cach3:
// int prime[100001];
// void sang()
// {
//     for (int i = 1; i <= 100000; i++)
//     {
//         prime[i] = i;
//     }
//     for (int i = 2; i <= sqrt(100000); i++)
//     {
//         if (prime[i] = i)
//         {
//             for (int j = i * i; j <= 100000; j += i)
//             {
//                 if (prime[j] = j)
//                 {
//                     prime[j] = i;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     sang();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cout << prime[i] << " ";
//         }
//         cout << endl;
//     }
//     system("pause");
//     return 0;
// }