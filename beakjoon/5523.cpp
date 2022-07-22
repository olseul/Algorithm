#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int awin=0, bwin = 0;
	for (int i = 0;i < n;i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			awin++;
		}
		else if (a < b) {
			bwin++;
		}
	}

	cout << awin << ' ' << bwin;
	return 0;
}