#include<iostream>
#include<string>
using namespace std;
#define endl '\n';
int main() {
	string s;
	bool ex = false;
	for (int i = 1;i <= 5;i++) {
		cin >> s;
		if (s.find("FBI")!= -1) {
			cout << i << endl;
			ex = true;
		}
	}
	if (ex == false) {
		cout << "HE GOT AWAY!";
	}
	return 0;
}