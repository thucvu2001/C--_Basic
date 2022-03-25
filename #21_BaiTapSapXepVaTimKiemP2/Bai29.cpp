//sap xep theo gia tri tuyet doi

#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int n, x;

// phai luu x la bien toan cuc vi ham bool su dung x
bool cmp(int a, int b){
    return abs(a -x) < abs(b-x);
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        stable_sort(a, a+n, cmp);
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}