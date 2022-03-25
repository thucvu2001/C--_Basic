#include <bits/stdc++.h>

using namespace std;

using ll = long long;

//cach 1: su dung set;
//int main(){
//	int t; cin >> t;
//	cin.ignore(); // xoa ki tu Enter/Space sau khi nhap xong t
//	while(t--){
//		string cau;
//		getline(cin, cau);
//		set<string> se;
//		stringstream tu_tach(cau); // stringstream dung de tach cac tu trong cau
//		string word;
//		while(tu_tach >> word){
//			se.insert(word);
//		}
//		cout << se.size() << endl;
//	}
//	return 0;
//}


// cach 2: su dung map;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string cau;
		getline(cin, cau);
		map<string, int> mp;
		stringstream tach_cau(cau);
		string word;
		while(tach_cau >> word){
			mp[word] = 1;
		}
		cout << mp.size() << endl;
	}
	return 0;
}
