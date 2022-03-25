#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000001];

bool cmp(pair<int, int> a, pair<int,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it : mp){
            v.push_back(it);
        }
        sort(begin(v), end(v), cmp);
        for(auto it : mp){
            for(int j=0;j<it.second;j++){
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}