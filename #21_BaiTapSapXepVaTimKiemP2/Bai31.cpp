#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l,r;
        for(int i=0;i<n-1;i++){
            if(a[i] > a[i+1]){
                l = i; break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i] < a[i-1]){
                r = i; break;
            }
        }
        int min = *min_element(a+l, a+r+1); // tim min trong doan tu [l,r)
        int max = *max_element(a+l, a+r+1); // tim max trong doan tu [l,r)
        for(int i=0;i<=l;i++){
            if(a[i] > min){
                l=i; break;
            }
        }
        for(int i=n-1;i>=r;i--){
            if(a[i] < max){
                r = i; break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
    system("pause");
    return 0;
}