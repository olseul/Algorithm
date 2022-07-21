#include<iostream>
#include<string>
using namespace std;
#define endl '\n'
int main() {
	int i = 1;
	while (1) {
		int a;
		cin >> a;
		string oper;
		cin >> oper;
		if (oper == "E") { return 0; }
		int b;
		cin >> b;

		cout << "Case " << i << ": ";
		if (oper == "!=") {
			bool result = a != b;
			if (result == 1) cout << "true" << endl;
			else cout << "false"<<endl;
		}
		else if (oper == "<") {
			bool result = a < b;
			if (result == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
		else if (oper == "<=") {
			bool result = a <= b;
			if (result == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
		else if (oper == ">") {
			bool result = a > b;
			if (result == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
		else if (oper == ">=") {
			bool result = a >= b;
			if (result == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
		else if (oper == "==") {
			bool result = a == b;
			if (result == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
		i++;
	}
	return 0;
}