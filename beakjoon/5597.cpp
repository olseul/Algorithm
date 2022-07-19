#include<iostream>
#include<vector>
using namespace std;
#define endl '\n';
vector <int> v;
int main() {
	int n;
	for (int i = 0;i < 28;i++) {
		cin >> n;
		v.push_back(n);
	}

	for (int i = 1;i <= 30;i++) {
		bool ex = false;
		for (int j = 0;j < 28;j++) {
			if (v[j] == i) {
				ex = true;
				break;
			}
		}
		if (!ex) cout << i << endl;
	}
	return 0;
}