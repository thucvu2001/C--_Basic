#include <iostream>
#include <math.h>

using namespace std;

bool nt(int n) {
	if (n < 2) {
		return false;
	 }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int check(long long n) {
	for (int i = 1; i <= 32; i++) {
		if (nt(i)) {
			int tmp = (int)pow(2, i) - 1;
			if (nt(tmp)) {
				long long hh = 1ll*tmp *pow(2, i - 1);
				if (hh == n) {
					return 1;
				}
			}
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		long long n;
		cin >> n;
		cout << check(n) << endl;
	}
	return 0;
}
