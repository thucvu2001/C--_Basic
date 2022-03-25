#include <bits/stdc++.h>

using namespace std;

int kiemTra(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt >= 2) {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (kiemTra(i)) {
            cout << i << " ";
        }
    }
    system("pause");
    return 0;
}
