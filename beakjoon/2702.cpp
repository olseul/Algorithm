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
	//유클리드 호제법 사용
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int a, b;
		cin >> a >> b;
		
		//최소공배수와 최대공약수
		cout << a*b/gcd(a, b) <<' ' << gcd(a, b) <<'\n';
	}
	return 0;
}