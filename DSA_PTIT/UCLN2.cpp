#include <bits/stdc++.h>
using namespace std;

int ulcn(int a, int b)
{
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ulcn(a, b) << endl;
    return 0;
}