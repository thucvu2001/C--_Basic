#include <bits/stdc++.h>

using namespace std;

vector<int> nhapDaySo(int n)
{
    vector<int> daySo;
    for (int i = 0; i < n; i++) {
        int so;
        cin >> so;
        daySo.push_back(so);
    }
    return daySo;
}

void sapXepGiamDan(vector<int>& daySo)
{
    sort(daySo.begin(), daySo.end(), greater<int>());
}

int timMin(vector<int> daySo)
{
    int min = daySo[0];
    for (int i = 1; i < daySo.size(); i++) {
        if (daySo[i] < min) {
            min = daySo[i];
        }
    }
    return min;
}

int xoaPhanTuMin(vector<int>& daySo, int min)
{
    int dem = 0;
    int n = daySo.size();
    int i = 0;
    while (i < n) {
        if (daySo[i] == min) {
            daySo.erase(daySo.begin() + 1);
            dem++;
            n--;
        } else {
            i++;
        }
    }
    return dem;
}

void xuatDaySo(vector<int> daySo)
{
    int n = daySo.size();
    for (int i = 0; i < n; i++) {
        cout << daySo[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> daySo = nhapDaySo(n);
    vector<int> daySoBanDau(daySo);

    sapXepGiamDan(daySo);
    xuatDaySo(daySo);

    int min = timMin(daySo);
    cout << min << endl;

    int dem = xoaPhanTuMin(daySoBanDau, min);
    xuatDaySo(daySoBanDau);

    cout << dem << endl;
    return 0;
}