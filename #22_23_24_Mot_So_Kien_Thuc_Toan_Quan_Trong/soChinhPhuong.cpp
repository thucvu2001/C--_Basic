#include <iostream>
#include <math.h>

using namespace std;

bool soChinhPhuong(	 n) {
	unsigned long long int x = sqrt(n);
	if (x * x == n) {
		return true;
	}
	return false;
}

bool chuSoCP(unsigned long long int n) {
	while (n>0) {
		int x = n % 10;
		if (soChinhPhuong(x) == false) {
			return false;
		}
		n /= 10;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int k;
		cin >> k;
		for (unsigned long long int i = pow(10, k - 1); i <= pow(10, k) - 1; i++) {
			if (soChinhPhuong(i) && chuSoCP(i)) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
