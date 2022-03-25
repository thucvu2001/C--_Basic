// cho mang x gom n phan tu, mang y gom m ptu
// dem cap x^y > y^x

// x < y => x^y > y^x 
// ngoai tru 2 TH x=2,y=3, x=2,y=4
// sap xep lai mang tang dan va duyet

#include <bits/stdc++.h>

using namespace std;

int cnt[5];

int first_pos(int a[],int l, int r, int x){
    int res = -1;
    while(l<=r){
        int m =(l+r) /2;
        if(a[m] > x){
            res =m;
            r = m-1;
        }
        else {
            l = m+1;
        }
    }
    return res;
}

// dem xem co bao nhieu phan tu thuoc mang y thoa man ddk
int count(int y[], int m, int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return cnt[0];
    }
    long long res = cnt[0] + cnt[1];
    // auto it = upper_bound(y,y+m, x);
    // res += (y+m) - it;
    int l = first_pos(y, 0, m-1, x);
    if(l != 1){
        res += m-1;
    }
    if(x==2){
        res -= (cnt[4] + cnt[3]);
    }
    if(x==3){
        res += cnt[2];
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n], b[m];
        for(int i=0;i<n;i++){
          cin >> a[i];
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            if(b[i] <= 4){
                cnt[b[i]]++;
            }
       }
       sort(b, b+m);
       long long ans = 0;
        for(int &x : a){
            ans += count(b, m, x);
        }
        cout << ans << endl;
        memset(cnt, 0, sizeof(cnt));
    }
    system("pause");
    return 0;
}