#include<iostream>
using namespace std;
int arr[1001];
int main() {
	int a, b;
	cin >> a >> b;
	int k = 1;
	for (int i = 1;i <= 1000;i++) {
		for (int j = 1;j <= i;j++) {
			arr[k] = i;
			if (k > 1000) {
				break;
			}
			k++;
		}
	}

	int cnt = 0;
	for (int i = a;i <= b;i++) {
		cnt += arr[i];
	}
	cout << cnt;
	return 0;
}