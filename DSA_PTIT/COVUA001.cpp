// Bàn cờ vua kích thước n⨯nn⨯n, các dòng và cột được đánh số từ 11 đến n (1≤n≤15)n(1≤n≤15).
// Trên bàn cờ, quân mã đặt ở ô (x,y) (1≤x,y≤n)(x,y)(1≤x,y≤n).
// Hãy đếm số lượng các ô cờ khác nhau mà quân mã có thể đi qua sau k bước di chuyển.

#include <bits/stdc++.h>
using namespace std;

int n, k, x, y, dem;
bool a[1001][1001];
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void Try(int x, int y, int k)
{
    if (k == 0) {
        return;
    }
    for (int i = 0; i < 8; i++) {
        int x1 = x + dx[i];
        int y1 = y + dy[y];
        if (a[x1][y1] == false && x1 >= 0 && y1 >= 0 && x1 < n && y1 < n) {
            dem++;
            a[x1][y1] = true;
        }
        Try(x1, y1, k - 1);
    }
}

void Try(int k, int x, int y){
    if(k = 0){
        return;
    }
    for(int i = 0; i < 8; i++){
        
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k >> x >> y;
        dem = 0;
        memset(a, false, sizeof(a));
        Try(x, y, k);
        cout << dem << endl;
    }
    return 0;
}