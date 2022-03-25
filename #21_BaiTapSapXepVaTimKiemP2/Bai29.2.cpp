//sap xep theo gia tri tuyet doi

#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int n, x;

// phai luu x la bien toan cuc vi ham bool su dung x
bool cmp (pair<int, int> a, pair<int, int> b){
    if(abs(a.first - x) != abs(b.first - x)){
        return abs(a.first - x) < abs(b.first -x);
    }
    return a.second < b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        pair<int, int> v[n];
        for(int i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second = i;
            // luu bien kem theo chi so
        }
        stable_sort(v, v+n, cmp);
        for(int i=0;i<n;i++){
            cout << v[i].first << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}