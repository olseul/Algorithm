#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;

	string res;
	int val=0;
	bool minu = false;
	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '-' || str[i] == '+' || i==str.size()) {
			if (minu) {
				val -= stoi(res);
				res = "";
			}
			else {
				val += stoi(res);
				res = "";
			}

			if (str[i] == '-') {
				minu = true;
			}
		}
		else {
			res += str[i];
		}
	}

	cout << val;
	return 0;
}