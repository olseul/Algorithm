#include<iostream>
#include<string>
using namespace std;
int n;
int m = 500001;
string str;
int cnt = 0;
bool ex;
void set() {
	ex = false;
	m = cnt < m ? cnt : m;
	cnt = 0;
}
void move(char ch) {

	ex = false;
	for (int i = 0;i < n;i++) {
		if (str[i] != ch) ex = true; 
		else if (ex && str[i] == ch) cnt++;
	}
	set(); // �ּҰ��� ã�� ��, ���� �ʱ�ȭ

	ex = false;
	for (int i = n-1;i >= 0;i--) {
		if (str[i] != ch) ex = true;
		else if (ex && str[i] == ch) cnt++;
	}
	set(); // �ּҰ��� ã�� ��, ���� �ʱ�ȭ

	
}
int main() {
	cin >> n;
	cin >> str;

	move('R'); // �������� ���� �Ǵ� ���������� ���� ���
	move('B'); // �Ķ����� ���� �Ǵ� ���������� ���� ���

	cout << m;

	return 0;
}