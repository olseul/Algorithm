#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	string seat;
	cin >> seat;

	int cnt = 1;
	bool con = false;
	for (int i = 0; i < n; i++) {
		if (seat[i] == 'S') {
			cnt++;
		}
		else if (seat[i] == 'L') {
			if (con) { // 연속일 때
				cnt++;
				con = false;
			}
			else {
				con = true;
			}
		}
	}
	if (cnt > n) cout << n;
	else cout << cnt;
	return 0;
}