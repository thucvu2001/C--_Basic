// đề bài: tìm ucln, bcnn của 2 số a, b (0 <= a, b <= 10^18) bằng thuật toán đệ quy

#include <bits/stdc++.h>
using namespace std;

// hàm tìm ucln
long long gcd(long long a, long long b)
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// hàm tìm bcnn
long long lcm(long long a, long long b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
    return 0;
}