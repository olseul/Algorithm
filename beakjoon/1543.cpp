#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);

	string sch;
	getline(cin, sch);

	int cnt = 0;
	for (int i = 0; i < str.size();i++) {
		if (str.find(sch,i) != string::npos ) {
			cnt++;
			i = str.find(sch, i) + sch.size()-1;
		}
	}

	cout << cnt;
	return 0;
}