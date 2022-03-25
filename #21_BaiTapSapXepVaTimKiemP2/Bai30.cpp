// hop va giao cua 2 mang

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j =0;
    vector<int> giao, hop;
    while(i < n && j < m){
        if(a[i] < b[j]){
            hop.push_back(a[i]);
            i++;
        }
        else if(a[i] > b[j]){
            hop.push_back(b[j]);
            j++;
        }
        else{
            hop.push_back(a[i]);
            giao.push_back(a[i]);
            ++i; ++j;
        }
    }
    while(i<n){
        hop.push_back(a[i]);
        i++;
    }
    while(j<m){
        hop.push_back(b[j]);
        j++;
    }
    for(int x : hop) cout << x << " ";
    cout << endl;
    for(int x : giao) cout << x << " ";
    cout << endl;
    system("pause");
    return 0;
}