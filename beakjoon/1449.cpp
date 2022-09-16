#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int loc[1000];
	int n, l;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		cin >> loc[i];
	}

	sort(loc, loc + n);

	int tape = loc[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (loc[i] - tape + 1 > l) {
			cnt++;
			tape = loc[i];
		}
	}

	cout << cnt;

}