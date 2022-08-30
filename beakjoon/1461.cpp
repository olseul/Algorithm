#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int main() {
	int loc[51];
	int n, m;
	cin >> n >> m;
	int pocnt = 0;

	for (int i = 0;i < n;i++) {
		cin >> loc[i];
		if (loc[i] < 0) {
			pocnt++;
		}
	}
	sort(loc, loc + n);
	int res = 0;
	for (int i = n-1;i >= pocnt;i-=m) {
		res += loc[i] * 2;
	}

	for (int i = 0;i < pocnt;i += m) {
		res += abs(loc[i] * 2);
	}

	res -= max(abs(loc[0]), abs(loc[n - 1]));
	cout << res;
	return 0;
}