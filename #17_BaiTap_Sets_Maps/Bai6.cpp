#include <bits/stdc++.h>

using namespace std;

using ll = long long;

//cach 1: su dung set
//int main(){
//	int t; cin >> t;
//	while(t--){
//		string s;
//		getline(cin, s);
//		cin.ignore();
//		set<char> se;
//		for(char x : s){
//			se.insert(tolower(x)); // tolower de cho ve het ki tu thuong, khong pha biet hoa thuong
//		}
//		if(se.size() == 26) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}


// cach 2: su dung map
//int main(){
//	int t; cin >> t;
//	while(t--){
//		string s;
//		getline(cin , s);
//		cin.ignore();
//		map<char, bool> mp;
//		for(char x : s){
//			mp[tolower(x)] = true;
//		}
//		if(mp.size() ==26) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}


// cach 3: su dung mang 1 chieu

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a[26] = {0};
		for(char x : s){
			a[tolower(x) - 'a'] = 1;
		}
		int cnt = 0;
		for(int i=0;i<26;i++){
			cnt += a[i];
		}
		if(cnt == 26) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

















