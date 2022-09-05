#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (1) {
		bool palin = true;
		cin >> str;
		if (str == "0") return 0;
		for (int i = 0; i < str.size() / 2; i++) {
			if (str[i] != str[str.size() - 1 - i]) {
				palin = false;
				break;
			}
		}
		if (palin) cout << "yes"<<'\n';
		else cout << "no"<<'\n';
	}
	return 0;
}