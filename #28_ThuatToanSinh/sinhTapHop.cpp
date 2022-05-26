// Bài toán sinh tập hợp con thông qua sinh xâu nhị phân
// coi như các phần tử trong tập hợp là các bit trong các cấu hình nhị phân
// nếu bit đó ở cấu hình hiện tại = 1 thì phần tử ứng với bit đó được chọn cho tập con
// từ đó sinh ra được tất cả các tập con

#include <bits/stdc++.h>
using namespace std;

int n, a[101];
bool ok;
vector<vector<int>> ans; // dùng để lưu các tập con

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) {
        ok = false;
    } else {
        a[i] = 1;
    }
}

bool cmp(vector<int> a, vector<int> b)
{
    if (a.size() != b.size()) {
        return a.size() < b.size();
    } else {
        int i = 0, j = 0, n = a.size();
        while (i < n && j < n) {
            if (a[i] != b[i]) {
                return (a[i] < b[i]);
            } else {
                i++;
                j++;
            }
        }
        return true;
    }
}

int main()
{
    cin >> n;
    ok = true;
    khoiTao();
    int b[101];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    while (ok) {
        vector<int> tmp; // lưu tập con hiện tại
        for (int i = 1; i <= n; i++) {
            if (a[i] == 1) {
                tmp.push_back(b[i - 1]); // thêm phần tử vào tập con
            }
        }
        sort(tmp.begin(), tmp.end());
        ans.push_back(tmp); // thêm tập con vào kết quả
        sinh();
    }
    sort(ans.begin(), ans.end(), cmp); // sắp xếp lại các tập con và in ra
    for (auto it : ans) {
        for (int i = 0; i < it.size(); i++) {
            cout << it[i] << " ";
        }
        cout << endl;
    }
    return 0;
}