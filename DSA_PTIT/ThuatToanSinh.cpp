//đề bài: sinh xâu nhị phân độ dài n (n <= 1000);

#include <bits/stdc++.h>
using namespace std;

int n, a[1001];
bool check;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void next()
{
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i] = 1;
    }
}

int main()
{
    cin >> n;
    check = true;
    khoiTao();
    while (check) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        next();
    }
    return 0;
}