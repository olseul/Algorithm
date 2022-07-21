#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	string cam= "CAMBRIDGE";

	for (int i = 0;i < s.size();i++) {
		bool ex = true;
		for (int j = 0;j < cam.size();j++) {
			if (s[i] == cam[j]) {
				ex = false;
				break;
			}
		}
		if (ex) {
			cout << s[i];
		}
	}
	return 0;
}