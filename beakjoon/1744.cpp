#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int i, int j) {
	return i > j;
}
int main() {
	int n;
	cin >> n;

	vector <int> pos;
	vector <int> neg;
	int m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m <= 0) neg.push_back(m);
		else pos.push_back(m);
	}
	sort(pos.begin(), pos.end(), compare);
	sort(neg.begin(), neg.end());

	int sum = 0;
	for (int i = 0; i < pos.size(); i+=2) {
		if (i == pos.size() - 1) {
			sum += pos[i];
			break;
		}
		int a = pos[i] + pos[i + 1];
		int b = pos[i] * pos[i + 1];
		sum += (a >= b ? a : b);
	}
	for (int i = 0; i < neg.size(); i += 2) {
		if (i == neg.size() - 1) {
			sum += neg[i];
			break;
		}
		int a = neg[i] + neg[i + 1];
		int b = neg[i] * neg[i + 1];
		sum += (a >= b ? a : b);
	}
	cout << sum;
	return 0;
}