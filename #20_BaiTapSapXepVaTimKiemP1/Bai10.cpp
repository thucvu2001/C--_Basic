// phan hoach lomuto trong quicksort
#include <bits/stdc++.h>

using namespace std;

void partition(int a[], int l, int r){ // phan hoach
	int pivot = a[r]; // phan tu cuoi cung
	int i = l-1, j = l;
	for(int j=l;j<r;j++){
		if(a[j] < pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i;
	swap(a[i], a[r]);
	for(int j=l;j<=r;j++){
		if(i==j){
			cout << "[" << a[j] << "] ";
		}
		else cout << a[j] << " ";
	}
}

int main(){
	int n; cin >> n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	partition(a, 0, n-1);
	return 0;
}
