#include<iostream>
using namespace std;
int main() {
	long long s;
	cin >> s;
	
	long long cnt = 0;
	long long n = 0;
	for (long long i = 1; i <= s; i++) {
		n += i;

		if (s - n < i) {
			if (!(s - n)) {
				cnt++;
				break;
			}
			else {
				n -= i;
			}
		}
		else { cnt++; }
	}
	cout << cnt;
	return 0;
}