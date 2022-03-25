// vat sua bo
// vat con bo co nhieu sua nhat truoc

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] > i){ // so luong sua nhieu hon so luong sua giam sut
            ans += a[i] - i;
        }
        else break;
    }
    cout << ans << endl;
    system("pause");
    return 0;
}