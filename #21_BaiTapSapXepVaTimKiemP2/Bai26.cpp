#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        int max1 = *max_element(a,a+n);
        int min2 = *min_element(b,b+m);
        cout << 1ll * max1 * min2 << endl; 
    }
    system("pause");
    return 0;
}