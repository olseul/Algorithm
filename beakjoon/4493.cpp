#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0;i < t;i++) {
		int n;
		cin >> n;
		int p1win = 0;
		int p2win = 0;
		for (int j = 0;j < n;j++) {
			char p1, p2;
			cin >> p1 >> p2;
			if (p1 == 'R') {
				if (p2 == 'P') p2win++;
				else if (p2 == 'S') p1win++;
			}
			else if (p1 == 'P') {
				if (p2 == 'S') p2win++;
				else if (p2 == 'R') p1win++;
			}
			else if (p1 == 'S') {
				if (p2 == 'R') p2win++;
				else if (p2 == 'P') p1win++;
			}
		}
		if (p1win > p2win) cout << "Player 1" << '\n';
		else if (p1win < p2win) cout << "Player 2" << '\n';
		else cout << "TIE" << '\n';
	}
	return 0;
}