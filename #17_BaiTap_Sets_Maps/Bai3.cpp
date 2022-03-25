// cho 2 mang so nguyen dem nhung phan tu thuoc mang thu nhat ma khong thuoc mang thu hai

#include <bits/stdc++.h>

using namespace std;


// cach 1: su dung set
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n,m; cin >> n >> m;
//		int a[n], b[m];
//		for(int &x : a) cin >> x;
//		set<int> s;
//		for(int i=0;i<m;i++){
//			int x; cin >> x;
//			s.insert(x);
//		}
//		bool ok = false;
//		for(int x : a){
//			if(s.find(x) == s.end()){
//				cout << x << " ";
//				ok = true; // tim thay thuoc mang thu 2;
//			}
//		}
//		if(ok == false){
//			cout << "NOT FOUND\n";
//		}
//		else{
//			cout << endl;
//		}
//	}
//	return 0;
//}



// cach 2: su dung map

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		map<int, bool> mp;
		for(int i=0; i<m; i++){
			int x; cin >> x;
			mp[x] = true;
		}
		bool ok = false;
		for(int x : a){
			if(mp.find(x) == mp.end()){
				cout << x << " ";
				ok = true;
			}
		}
		if(!ok){
			cout << "NOT FOUND" << endl;
		}
		else{
			cout << endl;
		}
	}
	return 0;
}






































