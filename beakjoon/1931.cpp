#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,a,b;
	cin >> n;
	vector <pair<int, int>> v;
	for (int  i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ b,a });
	}

	sort(v.begin(), v.end());

	int cnt = 1;
	int std = v[0].first;
	for (int  i = 1; i < n; i++) {
		if (std <= v[i].second) {
			cnt++;
			std = v[i].first;
		}
	}
	cout << cnt;
	return 0;
}