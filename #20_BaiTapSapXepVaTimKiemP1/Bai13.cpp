#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(a, a+n);
	sort(b, b+m);
	int i = 0, j = 0, ans = 0; // ans dem so truong hop ok
	while(i<n && j<m){
		if(a[i] <= b[j]){
			i++;
		}
		else{
			++ans;
			++i;
			++j;
		}
	}
	cout << ans << endl;
	return 0;
}
