#include<iostream>
#include<string>
using namespace std;
int main() {
	for (int i = 0;i < 3;i++) {
		string s;
		cin >> s;

		int max = 1;
		int cnt = 1;
		for (int j = 0;j < s.size()-1;j++) {
			if ((s[j]-'0') == (s[j + 1]-'0')) {
				cnt++;
			}
			else {
				if (max < cnt) {
					max = cnt;
				}
				cnt = 1;
			}
		}
		if (max < cnt) {
			max = cnt;
		}
		cout << max << '\n';

	}
	return 0;
}