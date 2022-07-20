#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	
	int joicnt=0, ioicnt = 0;

	int len = str.size() - 2;
	for (int i = 0;i < len;i++) {
		if (str.substr(i, 3) == "JOI") joicnt++;
		else if (str.substr(i, 3) == "IOI") ioicnt++;
	}
	cout << joicnt << '\n' << ioicnt;
	return 0;
}