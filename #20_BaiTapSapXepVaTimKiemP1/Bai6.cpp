#include <bits/stdc++.h>

using namespace std;

bool bs (int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] == x){
			return true;
		}
		else if(a[m] < x){
			l = m+1;
		}
		else if(a[m] > x){
			r = m -1;
		}
	}
	return false;
}

int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	cout << bs(a, n, x) << endl;
	return 0;
}
