//6 8 9 2 15
//sap xep 2  6  8  9  15
// k/c 	    4  2  1  6 => 1

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	int res = INT_MAX; // gtri int lon nhat
	for(int i=1;i<n;i++){
		res = min (res, a[i] - a[i-1]);
	}
	cout << res << endl;
	return 0;
}
