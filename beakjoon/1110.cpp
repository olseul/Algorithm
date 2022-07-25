#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int save = n;

	int cnt = 0;
	while (1) {
		int num = n % 10 + n / 10;
		int newnum = num%10 + n % 10 * 10;
		cnt++;
		n = newnum;
		if (n == save) break;
	}
	cout << cnt;

	return 0;
}