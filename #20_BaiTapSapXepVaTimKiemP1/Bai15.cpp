// bai toan xep gach
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    int ans = 1;// vien gach dau tien
    int docung = a[0];
    for(int i=1;i<n;i++){
        if(docung >= 1){
            ++ans; // tang so luong vien gach
            docung = min(docung - 1, a[i]);
        }
        else break;
    }
    cout << ans << endl;
    system("pause");
    return 0;
}