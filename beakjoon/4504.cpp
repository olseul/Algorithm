#include<iostream>
using namespace std;
#define endl '\n'
int main() {
	int n;
	cin >> n;

	while (1) {
		int num;
		cin >> num;
		if (!num) return 0;
		if (!(num % n)) cout << num << " is a multiple of " << n<<"."<<endl;
		else cout<< num << " is NOT a multiple of " << n <<"."<< endl;
	}
	return 0;
}