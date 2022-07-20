#include<iostream>
using namespace std;
int computer[101] = { 0, };
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int seat;
		cin >> seat;
		computer[seat] += 1;
	}

	int cnt = 0;
	for (int i = 1;i < 101;i++) {
		if (computer[i] > 1) cnt=cnt+computer[i]-1;
	}
	cout << cnt;
	return 0;
}