#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b) {
	return a > b;
}
int main() {
	string str;
	cin >> str;

	vector <int> v;
	for (int i = 0; i < str.size(); i++) {
		v.push_back(str[i] - '0');
	}
	sort(v.begin(), v.end(), compare);
	
	if (v[v.size() - 1]) {
		cout << -1;
		return 0;
	}
	
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		cnt += str[i];
	}

	if (cnt % 3 != 0) cout << -1;
	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
	}

	return 0;
}