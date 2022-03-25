//su dung ca sets va maps
//dem so luong phan tu khac nhau trong mang so nguyen
//input:
//	2 (so luong testcase)
//	5
//	1 2 2 2 1
//	4
//	1 2 3 4
//output:
//	2
//	4

#include <bits/stdc++.h>
using namespace std;
// cach 1: su dung set

//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		set<int> s;
//		for(int i=0;i<n;i++){
//			int x;
//			cin >> x;
//			s.insert(x);
//		}
//		cout << s.size() << endl;
//	}
//	return 0;
//}

// cach 2: su dung map

//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		map<int, bool> mp;
//		for(int i=0;i<n;i++){
//			int x;
//			cin >> x;
//			mp[x] = true;
//		}
//		cout << mp.size() << endl;
//	}
//	return 0;
//}


// cach 3 su dung sort (sap xep)

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		sort(a, a+n);  // sap xep tang dan, nhung phan tu giong nhau se dung canh nhau
		int ans = 1;
		for(int i=1;i<n;i++){
			if(a[i] != a[i-1]){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}































