#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define endl '\n'
int main() {
	string s;
	cin >> s;

	vector<string> v;
	int len = s.length();

	for (int i = 0;i < len; i++) {
		v.push_back(s.substr(i, len));
	}
	sort(v.begin(), v.end());

	for (int i = 0;i < len;i++) {
		cout << v[i] << endl;
	}
	return 0;
}