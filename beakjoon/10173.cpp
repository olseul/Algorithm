#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define endl '\n'
int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s == "EOI") break;
		
		// �빮�ڸ� �ҹ��ڷ� ���� 
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		if (s.find("nemo") != -1) cout << "Found" << endl;
		else cout << "Missing" << endl;
	}
	return 0;
}