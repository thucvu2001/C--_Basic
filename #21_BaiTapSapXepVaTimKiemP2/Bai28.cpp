#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int l = INT_MAX, r = INT_MIN;
        // memset (a, false, sizeof(a))
        bool a[1000001] = {0};
        for(int i = 0;i<n;i++){
            int x; cin >> x;
            l = INT_MAX;
            r = INT_MIN;
            a[x] = true;
        }
        int cnt = 0;
        for(int i=l;i<=r;i++){
            if(a[i] == 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}