#include<iostream>
using namespace std;
int main() {
	long long n, m;
	cin >> n >> m;

	long long maxsq = 0;
	if (n == 1) {
		maxsq = 1;
	}
	else if (n == 2) {
		if (m < 7) {
			if (m % 2) { // »¶ºˆ
				maxsq = (m + 1) / 2;
			}
			else { // ¬¶ºˆ
				maxsq = m / 2;
			}
		}
		else {
			maxsq = 4;
		}
	}
	else { // n >=4 ¿œ ∂ß
		if (m <= 4) {
			maxsq = m;
		}
		else if (m <= 6) {
			maxsq = 4;
		}
		else {
			maxsq = m - 2;
		}
	}

	cout << maxsq;
	return 0;
}