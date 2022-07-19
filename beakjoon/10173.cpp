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
		
		// 대문자를 소문자로 변형 
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		if (s.find("nemo") != -1) cout << "Found" << endl;
		else cout << "Missing" << endl;
	}
	return 0;
}