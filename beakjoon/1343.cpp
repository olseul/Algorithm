#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'X') {
			int j;
			for (j = i; j < i+4; j++) {
				if (str[j] != 'X') {
					break;
				}
			}
			if (j == i + 2) {
				str[j - 1] = 'B';
				str[j - 2] = 'B';
				i += 1;
			}
			else if(j==i+4) {
				str[j - 1] = 'A';
				str[j - 2] = 'A';
				str[j - 3] = 'A';
				str[j - 4] = 'A';
				i += 3;
			}
			else {
				cout << -1;
				return 0;
			}
		}
	}

	cout << str;
	return 0;
}