#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n; // cin은 버퍼에 엔터가 남아있으므로, 없애준다.
	cin.ignore(); // 입력 버퍼 지우기
	for (int i = 0;i < n;i++) {
		string str;
		getline(cin,str,'\n');
		cout << i+1 << ". " << str << '\n';
	}
	return 0;
}