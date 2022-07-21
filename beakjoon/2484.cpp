#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int maxrew = 0;
	for (int i = 0;i < n;i++) {
		int num[6] = { 0, };
		int arr[4];
		for (int j = 0;j < 4;j++) {
			cin >> arr[j];
		}
		for (int j = 0;j < 4;j++) {
			num[arr[j]-1]++;
		}
		int rew;
		int cnt2 = 0;
		int cnt1 = 0;
		int first2;
		int max;
		for (int j = 0;j < 6;j++) {
			if (num[j] == 4) {
				rew = (j+1) * 5000 + 50000;
				break;
			}
			else if (num[j] == 3) {
				rew =(j+1) * 1000 + 10000;
				break;
			}
			else if (num[j] == 2) {
				cnt2++;
				if (cnt2 == 1) {
					first2 = j + 1;
					rew = (j + 1) * 100 + 1000;
				}
				else if (cnt2 == 2) {
					rew = 2000 + first2 * 500 + (j + 1) * 500;
				}
			}
			else if(num[j] == 1) {
				cnt1++;
				if (cnt1 == 4) {
					int max = arr[0];
					for (int i = 1;i < 4;i++) {
						if (arr[i] > max) max = arr[i];
					}
					rew = max * 100;
				}
			}
		}
		if (maxrew < rew) { maxrew = rew; }
	}
	cout << maxrew;
	return 0;
}