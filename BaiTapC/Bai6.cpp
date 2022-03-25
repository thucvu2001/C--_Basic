#include <bits/stdc++.h>

using namespace std;

int a[10000001];
void sang()
{
    for (int i = 0; i < 1000001; i++) {
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= 1000000; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sang();
    int i = 0, cnt = 0;
    while (cnt < n) {
        if (a[i] == 1) {
            cout << i << " ";
            cnt++;
        }
        i++;
    }

    system("pause");
    return 0;
}
