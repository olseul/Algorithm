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
	set(); // 최소값을 찾은 후, 변수 초기화

	ex = false;
	for (int i = n-1;i >= 0;i--) {
		if (str[i] != ch) ex = true;
		else if (ex && str[i] == ch) cnt++;
	}
	set(); // 최소값을 찾은 후, 변수 초기화

	
}
int main() {
	cin >> n;
	cin >> str;

	move('R'); // 빨간색을 왼쪽 또는 오른쪽으로 모을 경우
	move('B'); // 파란색을 왼쪽 또는 오른쪽으로 모을 경우

	cout << m;

	return 0;
}