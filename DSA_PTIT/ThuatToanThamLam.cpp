// đề bài: ca sĩ A được mời đi diễn N đoàn nhạc
//         đoàn thứ i mời diễn từ ngày a[i] đến ngày b[i]
//         tuy nhiên tại 1 thời điểm chỉ có thể tham gia 1 đoàn
//         Xác định số lượng đoàn tham gia nhiều nhất để không bị trùng thời gian

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n; // số lượng lịch diễn
    cin >> n;
    pair<int, int> a[n]; // lưu lịch diễn
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp); // sắp xếp lịch diễn theo thời gian kết thúc tăng dần
    int ans = 1; // ans lưu kết quả, ans = 1 vì sau khi sắp xếp thì buổi diễn đầu tiên sẽ được chọn
    int endTime = a[0].second; // lưu thời gian kết thúc của buổi diễn được chọn hiện tại
    for (int i = 1; i < n; i++) { // bắt đầu xét từ buổi diễn thứ 2 (i = 1);
        if (a[i].first >= endTime) { // kiểm tra thời gian của buổi hiện tại
            ans++;
            endTime = a[i].second; // cập nhật thời gian kết thúc
        }
    }
    cout << ans << endl;
    return 0;
}
