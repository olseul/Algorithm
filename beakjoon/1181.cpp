#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	else if (a.size() == b.size()) return a < b;
}
int main() {
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		if (find(v.begin(), v.end(), s) == v.end()) {
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0;i < v.size();i++) {
		cout << v[i] << '\n';
	}
}