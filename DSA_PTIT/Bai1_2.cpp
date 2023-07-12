#include <iostream>

using namespace std;

// Hàm nhập vào 1 dãy số nguyên
void nhapDaySo(int n, int daySo[])
{
    for (int i = 0; i < n; i++) {
        cin >> daySo[i];
    }
}

// Hàm sắp xếp dãy số theo thứ tự giảm dần
void sapXepGiamDan(int n, int daySo[])
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (daySo[j] > daySo[i]) {
                int temp = daySo[i];
                daySo[i] = daySo[j];
                daySo[j] = temp;
            }
        }
    }
}

// Hàm tìm giá trị nhỏ nhất trong dãy số
int timGiaTriNhoNhat(int n, int daySo[])
{
    int nhoNhat = daySo[0];
    for (int i = 1; i < n; i++) {
        if (daySo[i] < nhoNhat) {
            nhoNhat = daySo[i];
        }
    }
    return nhoNhat;
}

// Hàm xoá tất cả các phần tử giá trị bằng giá trị nhỏ nhất
int xoaPhanTuNhoNhat(int n, int daySo[], int nhoNhat)
{
    int soLuongXoa = 0;
    int i = 0;
    while (i < n) {
        if (daySo[i] == nhoNhat) {
            for (int j = i; j < n - 1; j++) {
                daySo[j] = daySo[j + 1];
            }
            n--;
            soLuongXoa++;
        } else {
            i++;
        }
    }
    return soLuongXoa;
}

// Hàm xuất dãy số
void xuatDaySo(int n, int daySo[])
{
    for (int i = 0; i < n; i++) {
        cout << daySo[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int daySo[100];
    nhapDaySo(n, daySo);
    int daySoBanDau[100];
    for (int i = 0; i < n; i++) {
        daySoBanDau[i] = daySo[i];
    }
    sapXepGiamDan(n, daySo);
    int nhoNhat = timGiaTriNhoNhat(n, daySo);
    int soLuongXoa = xoaPhanTuNhoNhat(n, daySoBanDau, nhoNhat);
    xuatDaySo(n, daySo);
    cout << nhoNhat << endl;
    xuatDaySo(n - soLuongXoa, daySoBanDau);
    cout << soLuongXoa << endl;
    return 0;
}
