#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector <pair<int, int>> v;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back({ a,b });
		}

		sort(v.begin(), v.end());

		int cnt = 1;
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (v[res].second > v[i].second) {
				cnt++;
				res = i;
			}
		}

		cout << cnt << '\n';
	}
	return 0;
}