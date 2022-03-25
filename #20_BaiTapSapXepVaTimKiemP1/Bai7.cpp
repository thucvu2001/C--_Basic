#include <bits/stdc++.h>

using namespace std;

int bs (int a[], int n, int x){
	int l=0, r=n;
	while(r >= l){
		int m = (l+r) / 2;
		if(a[m] == x){
			return true;
		}
		else if(a[m] > x){
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
	}
	return false;
}

int dauTien(int a[], int n, int x){
	int res = -1, l=0, r=n-1;
	while(l<=r){
		int m = (l+r) / 2;
		if (a[m] == x){
			res = m+1;
			r = m-1;
		}
		else  if(a[m] < x){
			l=m+1;
		}
		else{
			r = m-1;
		}
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		cout << dauTien(a, n , x) << endl;
	}
	return 0;
}
