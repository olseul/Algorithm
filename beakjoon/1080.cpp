#include<iostream>
#include<string>
using namespace std;
int n, m;
string a[51];
string b[51];
void change(int y,int x) {
	for (int i = y; i < y + 3; i++) {
		for (int j = x; j < x + 3; j++) {
			if (a[i][j]=='1') a[i][j] = '0';
			else a[i][j] = '1';
		}
	}
}
bool compare() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) return false;
		}
	}
	return true;
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int cnt = 0;
	for (int i = 0; i <= n - 3; i++) {
		for (int j = 0; j <= m - 3; j++) {
			if (a[i][j] != b[i][j]) {
				change(i, j);
				cnt++;
			}
			else continue;
		}
	}

	if (compare()) cout << cnt;
	else cout << -1;

	return 0;
}