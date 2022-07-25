#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long res;
	for (int i = 0;i < t;i++) {
		int n, m;
		res = 1;
		cin >> n >> m;
		//이항정리
		if ((m / 2) < n) {
			n = (m - n);
		}

		//조합 분자
		for (int j = 0;j < n;j++) {
			res *= (m - j);
		}

		//조합 분모
		for (int k = 1;k <= n;k++) {
			res /= k;
		}

		cout<<res<<'\n';
	}
	return 0;
}