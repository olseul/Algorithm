#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		string str;
		cin >> str;
		int cnt = 0;
		for (int j = 65;j < 91;j++) {
			bool ex = false;
			for (int k = 0;k < str.size(); k++) {
				if (str[k] == char(j)) {
					ex = true;
					break;
				}
			}
			if (!ex) {
				cnt += j;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}