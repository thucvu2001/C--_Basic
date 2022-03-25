#include <bits/stdc++.h>

using namespace std;

int demUoc (int n){
    int cnt =0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i != n/i){
                cnt +=2;
            }
            else{
                cnt +=1;
            }
        }
    }
    // int x = sqrt(n);
    // if(x*x ==n){
    //     cnt --;
    // }
    return cnt;
}

//cach 2: dua tren ly thuyet 
// n = p1^e1 * p2^e2 * p3^e3 * ... * pk^ek
// d(n) = (e1+1) * (e2+1) * (e3+1) * ... * (ek+1)
// vd: 60 = 2^2 * 3^1 * 5^1;
// d(60) = (2+1) * (1+1) * (1+1) = 12
int demUoc2(int n){
    int res = 1;
    for(int i = 2;i<=sqrt(n);i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        res *= (cnt+1);
    }
    if(n!=1){ // kiem tra uoc cuoi cung co != 1
        res*=2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        cout << demUoc(n) << endl;
    }
    system("pause");
    return 0;
}