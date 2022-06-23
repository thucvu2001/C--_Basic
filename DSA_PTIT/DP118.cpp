#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
long long C[1001][1001];

void tohop(int n)
{
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == n) {
                C[i][j] = 1;
            } else {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    tohop(n - 1);
    cout << "[";
    for (int i = 0; i <= n - 1; i++) {
        cout << "[";
        for (int j = 0; j <= i; j++) {
            cout << C[i][j];
            if (j == i) {
                cout << "]";
            } else {
                cout << ",";
            }
        }
        if (i == n - 1) {
            cout << "]";
        } else {
            cout << ",";
        }
    }
    return 0;
}