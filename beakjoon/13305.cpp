#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long n;
	cin >> n;

	vector <long long> dis;
	long long distance;
	for (long long i = 0; i < n - 1; i++) {
		cin >> distance;
		dis.push_back(distance);
	}

	vector <long long> oil;
	long long oil_;
	for (long long i = 0; i < n; i++) {
		cin >> oil_;
		oil.push_back(oil_);
	}

	long long totalprice=0;
	for (long long i = 0; i < n-1; i++) {
		long long totaldis = dis[i];
		long long j;
		for (j = i+1; j < n-1; j++) {
			if (oil[i] <= oil[j]) {
				totaldis += dis[j];
			}
			else {
				break;
			}
		}
		totalprice += oil[i] * totaldis;
		i = j-1;
	}

	cout << totalprice;
	return 0;
}