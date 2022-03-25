// tim giao cua  day so;

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n,m,l;
        cin >> n >> m >> l;
        int a[n], b[m], c[l];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int &x : c) cin >> x;
        vector<int> res;
        int i=0,j=0,k=0;
        while(i<n && j<m && k<l){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                ++i;++j;++k;
            }
            else if(a[i] <= b[j] && a[i] <= c[k]){
                ++i;
            }
            else if(b[j] <= a[i] && b[j] <= c[k]){
                ++j;
            }
            else ++k;
        }
        if(res.size() == 0){
            cout << "-1" << endl;
        }
        else{
            for(int x : res){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    system("pause");
    return 0;
}