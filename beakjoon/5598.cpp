#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0;i < s.size();i++) {
		if ('D' <= s[i] && s[i] <= 'Z') {
			cout << char(s[i] - 3);
		}
		else {
			if (s[i] == 'A') cout << 'X';
			else if (s[i] == 'B') cout << 'Y';
			else if(s[i] == 'C') cout << 'Z';
		}
	}
	return 0;
}