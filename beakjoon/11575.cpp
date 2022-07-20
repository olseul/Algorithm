#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;

	for (int i = 0;i < t;i++) {
		int a, b;
		cin >> a >> b;
		string pw;
		cin >> pw;

		for (int j = 0;j < pw.size();j++) {
			pw[j] -= 65;
			pw[j] = (pw[j] * a + b) % 26;
			pw[j] += 65;
			cout << (char)pw[j];
		}cout << '\n';
	}
	return 0;
}