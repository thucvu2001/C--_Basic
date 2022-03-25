#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<string, int> mp;
		stringstream ss(s);
		string word;
		while(ss >> word){
			mp[word]++;
		}
		string res; int fre = 0;
		for(auto it : mp){
			if(it.second > fre){ // > de lay tu co thu tu tu` dien? nho; >= de lay tu co thu tu tu` dien? lon
				fre = it.second;
				res = it.first;
			}
		}
		cout << res << endl;
	}
	return 0;
}
