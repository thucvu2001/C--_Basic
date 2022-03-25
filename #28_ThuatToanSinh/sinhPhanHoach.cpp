// sinh phan hoach
// input: 6
// output:
// 6
// 5 1
// 4 2
// 4 1 1
// ...
// 1 1 1 1 1 1

#include <bits/stdc++.h>

using namespace std;

int n;
int a[100];
int ok;
int cnt; // số lượng số hạng trong phân tích hiện tại

void khoiTao()
{
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        --i; // tim bit dau tien khac 1;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]--;              // giam bit != 1 di 1 don vi;
        int d = cnt - i + 1; // tính phần còn thiếu để bù
        cnt = i;             // reset số lượn số hạng = i;
        // biểu diễn phần còn thiếu (d) thông qua a[i] bằng cách chia nguyên và chia dư;
        int q = d / a[i];
        int r = d % a[i];
        if (q)
        {
            for (int j = 1; j <= q; j++)
            {
                cnt++; // mỗi lần viết 1 số đằng sau thì tăng tổng số lượng số hạng
                a[cnt] = a[i];
            }
        }
        if (r)
        {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main()
{
    cin >> n;
    khoiTao();
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= cnt; i++) // duyệt tới số lượn số hạng
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    system("pause");
    return 0;
}
