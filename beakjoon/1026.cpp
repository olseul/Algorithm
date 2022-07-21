#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	for (int i = 0;i < n;i++) {
		int anum;
		cin >> anum;
		a.push_back(anum);
	}
	for (int i = 0;i < n;i++) {
		int bnum;
		cin >> bnum;
		b.push_back(bnum);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int sum = 0;
	for (int i = 0;i < a.size();i++) {
		sum+=a[i] * b[a.size() - 1 - i];
	}
	cout << sum;

	return 0;
}