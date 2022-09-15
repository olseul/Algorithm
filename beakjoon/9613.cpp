#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (!(a % b)) return b;
	return gcd(b, a % b);
}
int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int arr[100];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		long long sum = 0;
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				sum+=gcd(arr[i], arr[j]);
			}
		}

		cout << sum<<'\n';
	}
	return 0;
}