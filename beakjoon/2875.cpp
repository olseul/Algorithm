#include<iostream>
using namespace std;
int main() {
	int n, m, k;
	cin >> n >> m >> k;

	int cnt = 0;
	while (1) {
		n -= 2;
		m -= 1;
		if (n + m >= k && n>=0 && m>=0) {
			cnt++;
			continue;
		}
		break;
	}

	cout << cnt;
	return 0;
}