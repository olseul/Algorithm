#include<iostream>
#include<string>
using namespace std;

int main() {;
	for (int i = 0;i < 100;i++) {
		string s;
		getline(cin, s);
		if (!s.size()) break;
		int spaceCnt=0, upperCnt = 0,lowerCnt =0, digitCnt=0 ;
		for (int j = 0;j < s.size();j++) {
			if (s[j] == ' ') spaceCnt++;
			else if ('A' <= s[j] && s[j] <= 'Z') upperCnt++;
			else if ('a' <= s[j] && s[j] <= 'z') lowerCnt++;
			else if ('0' <= s[j] && s[j] <= '9') digitCnt++;
		}
		cout << lowerCnt << ' ' << upperCnt << ' ' << digitCnt << ' ' << spaceCnt << '\n';
	}
	return 0;
}