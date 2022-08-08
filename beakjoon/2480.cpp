#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int rew = 1;
	if (a == b && b == c) {
		rew = 10000 + a * 1000;
	}
	else if (a == b || b == c || a == c) {
		if (a == b) {
			rew = 1000 + a * 100;
		}
		else if (b == c) {
			rew = 1000 + b * 100;
		}
		else if (a == c) {
			rew = 1000 + a * 100;
		}
	}
	else {
		int max = a;
		if (max < b) max = b;
		if (max < c) max = c;

		rew = max * 100;
	}

	cout << rew;
}