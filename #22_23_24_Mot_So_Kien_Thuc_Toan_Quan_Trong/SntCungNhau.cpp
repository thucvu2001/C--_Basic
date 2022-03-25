// so nguyen to cung nhau la 2 so co UCLN la 1

#include <bits/stdc++.h>

using namespace std;

// ham tim UCLN
long long gcd(long long a, long long b){
    if(b == 0){
        return a;
    }
    return gcd (b, a%b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    if(gcd(a,b) == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}