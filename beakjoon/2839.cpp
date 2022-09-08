#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	while (n){
		if (n % 3 == 0 && n <= 12) {
			cnt += n / 3;
			n = 0;
			break;
		}
		else if(n>=5) {
			n -= 5;
			cnt++;
		}
		else {
			break;
		}
	}
	if (!n) cout << cnt;
	else cout << -1;
	return 0;
}