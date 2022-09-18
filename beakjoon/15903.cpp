#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	long long n,m;
	cin >> n >> m;

	vector <long long> v;
	long long a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < m; i++) {
		sort(v.begin(), v.end());

		long long sumval = v[0] + v[1];
		v[0] = sumval;
		v[1] = sumval;
	}

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}

	cout << sum;
	return 0;
}