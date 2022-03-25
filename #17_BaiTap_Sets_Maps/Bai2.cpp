//cho mot mang so nguyen gom n phan tu, kiem tra xem mot so nao do co nam trong mang hay khong
//intput:
//	dong 1: so luong test case
//	dong 2: so luong phan tu trong mang
//	dong 3: n phan tu trong mang
//	dong 4: so luong truy van q
//	q dong tiep theo moi dong la 1 so nguyen can kiem tra
//output:
//	co in ra YES, khong in ra NO

//vd:
//	input:
//		1
//		6
//		1 2 3 8 7 0
//		4
//		1
//		2
//		10
//		20
//	output:
//		YES
//		YES
//		NO 
//		NO

#include <bits/stdc++.h>

using namespace std;



// cach 1: sap xep sau do tim kiem nhi phan (binary_search)
//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n];
//		for(int &x : a){
//			cin >> x;
//		}
//		sort(a, a+n);
//		int q; cin >> q;
//		while(q--){
//			int x; cin >> x;
//			if(binary_search(a,a+n,x)){
//				cout << "YES\n";
//			}
//			else{
//				cout << "NO\n";
//			}
//		}
//	}
//	return 0;
//}


// cach 2: su dung set
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> s;
		for (int i=0;i<n;i++){
			int x; cin >> x;
			s.insert(x);
		}
		int q; cin >> q;
		while(q--){
			int x; cin >> x;
			if(s.count(x) == 1){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
	}
	return 0;
}

















