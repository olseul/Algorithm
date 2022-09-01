#include<iostream>
using namespace std;
int main() {
	int l, p, v;
	int cnt = 1;
	int res = 0;
	while (1) {
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) break;

		res = v / p * l;
		res += v % p > l ? l : v % p;
		cout << "Case " << cnt << ":" << " " << res <<'\n';
		cnt++;
	}
	return 0;
}