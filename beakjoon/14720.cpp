#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int store[1000];
	int milk = 0; // 처음으로는 딸기 우유를 마셔야한다.

	for (int i = 0;i < n;i++) {
		cin >> store[i];
	}

	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (store[i]==0 && milk == 0) { // 딸기우유 파는 가게고, 마셔야하는 우유가 딸기 우유라면?
			cnt++;
			milk = 1; 
		}
		else if (store[i] == 1 && milk == 1) {
			cnt++;
			milk = 2;
		}
		else if (store[i] == 2 && milk == 2) {
			cnt++;
			milk = 0;
		}
	}

	cout << cnt;

	return 0;
}