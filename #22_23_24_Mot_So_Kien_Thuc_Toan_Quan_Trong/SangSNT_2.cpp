// sang so nguyen to tren doan (l,r)
#include <bits/stdc++.h>

using namespace std;

void sang(int l, int r){
    int prime[r-l+1];
    for(int i=0;i<=r-l;i++){
        prime[i] = 1;
    }
    for(int i=2;i<=sqrt(r);i++){
        for(int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
            prime[j-l] = 0;
        }
    }
    for(int i=max(l,2);i<=r;i++){
        if(prime[i-l] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    int l,r; cin >> l >> r;
    sang(l,r);
    system("pause");
    return 0;
}