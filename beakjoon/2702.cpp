#include<iostream>
using namespace std;
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	//��Ŭ���� ȣ���� ���
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int a, b;
		cin >> a >> b;
		
		//�ּҰ������ �ִ�����
		cout << a*b/gcd(a, b) <<' ' << gcd(a, b) <<'\n';
	}
	return 0;
}