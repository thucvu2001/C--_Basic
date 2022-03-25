#include <iostream>
#include <math.h>

using namespace std;

bool nt (int n) {
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

bool ntHoanToan(int n) {
	int x;
	while (n) {
		x = n % 10;
		if (nt(x) == false) {
			return false;
		}
		n /= 10;
	}
	return true;
}


int main() {
	int test;
	cin >> test;
	for (int i = 1; i <= test; i++) {
		int n;
		cin >> n;
		int dem = 0;
		for (int i = 2; i <= n; i++) {
			if (ntHoanToan(i) && nt(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}

