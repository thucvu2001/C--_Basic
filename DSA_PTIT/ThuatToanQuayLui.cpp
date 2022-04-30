// đề bài: sử dụng thuật toán quay lui sinh hoán vị các số từ 1 đến n (n <= 1000);

#include <bits/stdc++.h>
using namespace std;

int X[1001], n, daXet[1001];

// hàm in ra cấu hình hiện tại
void in()
{
    for (int i = 1; i <= n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
}

// hàm quay lui sinh hoán vị
void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (daXet[j] == 0) { // j chua duoc sd trong nhanh quay lui
            X[i] = j;
            daXet[j] = 1; // danh dau j da duoc su dung
            if (i == n) { // khi xét đến phần tử cuối cùng thì hoàn thành 1 cấu hình
                in();
            } else {
                Try(i + 1); // nếu chưa đến phần tử cuối thì tiếp tục xét
            }
            daXet[j] = 0; // reset để tiếp tục sinh ra các cấu hình khác
        }
    }
}

int main()
{
    memset(daXet, 0, sizeof(daXet));
    cin >> n;
    Try(1);
    return 0;
}