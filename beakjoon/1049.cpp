#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	int pak[51];
	int ind[51];
	for (int i = 0; i < m; i++) {
		cin >> pak[i] >> ind[i];
	}
	sort(pak, pak + m);
	sort(ind, ind + m);

	int mon = 0;
	while (n) {
		if (n>=6) {
			if (pak[0] > ind[0] * 6) {
				mon += ind[0]*6;
			}
			else {
				mon += pak[0];
			}
			n -= 6;
		}
		else {
			if (pak[0] > ind[0] * n) {
				mon += ind[0] * n;
			}
			else {
				mon += pak[0];
			}
			break;
		}
	}

	cout << mon;

	return 0;
}