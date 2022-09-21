#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b,c,d;
	cin >> a >> b>>c>>d;
	a = a + b;
	c = c + d;

	long long sum = stoll(a) + stoll(c);
	cout << sum;
	return 0;
}