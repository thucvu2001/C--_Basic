#include <bits/stdc++.h>

using namespace std;

int tongUoc (int n){
    int sum =0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i != n/i){
                sum += i + n/i;
            }
            else{
                sum +=i;
            }
        }
    }
    return sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << tongUoc(n) << endl;
    }
    system("pause");
    return 0;
}