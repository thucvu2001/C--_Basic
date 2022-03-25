#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int l = 0, r = n-1;
        while(l <= r){
            if(l == r){ // neu so luong phan tu la le 
                cout << a[l]; 
                break;
            }
            else{
                cout << a[r] << " " << a[l] << " ";
                l++;
                r--;
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}