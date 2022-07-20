#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#define endl '\n'
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		int sum=0;
		for (int j = 0;j < 3;j++) {
			s[j] -= 65;
			sum += (int)s[j] * pow(26, 2 - j);
		}

		if (abs(sum - stoi(s.substr(4, 4))) <= 100) {
			cout << "nice" << endl;
		}
		else cout << "not nice" << endl;
	}
	return 0;
}