#include <bits/stdc++.h>

using namespace std;

// tim vi tri xuat hien dau tien cua x
int first_post(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){ // tim vi tri xuat hien cua x;
            res = m;
            r = m-1;
        }
        else if(a[m] < x){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return res;
}

// tim vi tri xuat hien cuoi cung cua x
int last_post(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){ // tim vi tri xuat hien cua x
        int m = (l+r) /2;
        if(a[m] == x){
            res = m;
            l = m+1;
        }
        else if(a[m] < x){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return res;
}

int a[1000001];
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        long long ans = 0;
        for(int i=0;i<n-1;i++){
            //voi moi ptu a[i] tim so lan xuat hien cua ptu k-a[i]
            int l = first_post(a, i+1, n-1, k-a[i]);
            int r = last_post(a, i+1, n-1, k-a[i]);
            if(l != -1){
                ans += r - l + 1;
            }
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}