#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;

	int cnt1 = 0, cnt0 = 0;
	bool con1 = false, con0 = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1' && !con1) {
			cnt1++;
			con1 = true;
			con0 = false;
		}
		else if (s[i] == '0' && !con0) {
			cnt0++;
			con0 = true;
			con1 = false;
		}
	}

	if (cnt1 < cnt0) cout << cnt1;
	else cout << cnt0;
	return 0;
}