#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n; // cin�� ���ۿ� ���Ͱ� ���������Ƿ�, �����ش�.
	cin.ignore(); // �Է� ���� �����
	for (int i = 0;i < n;i++) {
		string str;
		getline(cin,str,'\n');
		cout << i+1 << ". " << str << '\n';
	}
	return 0;
}