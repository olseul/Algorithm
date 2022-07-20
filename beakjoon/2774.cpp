#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		int arr[10] = { 0, };
		string num;
		cin >> num;

		for (int j = 0;j < num.size();j++) {
			arr[num[j]-'0'] += 1;
		}

		int cnt = 0;
		for (int k = 0;k < 10;k++) {
			if (arr[k]) cnt++;
		}
		cout << cnt<<'\n';
	}
	return 0;
}