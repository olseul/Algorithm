#include<iostream>
using namespace std;
int main() {
	int m;
	cin >> m;
	m = 1000 - m;

	int Changes[6] = { 500,100,50,10,5,1 }; // ÀÜµ·
	int cnt = 0;
	for (int i = 0;i < 6;i++) {
		if (m - Changes[i] >= 0) {
			m -= Changes[i];
			cnt++;
			i--;
			if (!m) break;
		}
	}
	cout << cnt;
}