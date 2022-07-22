#include<iostream>
using namespace std;
int main() {
	int a[10], b[10],win[10];
	for (int i = 0;i < 10;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < 10;i++) {
		cin >> b[i];
	}
	int awin = 0;
	int bwin = 0;
	for (int i = 0;i < 10;i++) {
		if (a[i] > b[i]) {
			win[i] = 1;
			awin++;
		}
		else if (a[i] < b[i]) {
			win[i] = -1;
			bwin++;
		}
		else win[i] = 0;
	}
	if (awin > bwin) cout << "A";
	else if (awin < bwin) cout << "B";
	else cout << "D";

	return 0;
}