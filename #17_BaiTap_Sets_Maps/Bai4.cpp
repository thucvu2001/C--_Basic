// tim so xuat hien nhieu nhat
#include <bits/stdc++.h>

using namespace std;

//su dung map
using ll = long long;
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		map<long long, int> mp;
		for(int i=0;i<n;i++){
			long long x; cin >> x;
			mp[x]++;
		}
		ll res, fre = INT_MIN;
		for(auto it : mp){
			if(it.second > fre){
				fre = it.second;
				res = it.first;
			}
		}
		cout << res << " " << fre << endl;
	}
	return 0;
}
