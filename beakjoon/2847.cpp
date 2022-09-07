#include<iostream>
using namespace std;
int score[101];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	int cnt = 0;
	for (int i = n-1; i > 0; i--) {
		if (score[i] <= score[i - 1]) {
			int tmp = score[i - 1];
			score[i - 1] = score[i] - 1;
			cnt += tmp - score[i - 1];
		}
	}

	cout << cnt;
	return 0;
}