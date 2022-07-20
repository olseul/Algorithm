#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main() {
	int num;
	for (int i = 0;i < 8;i++) {
		cin >> num;
		v.push_back(num);
	}
	bool astrue = true;
	for (int i = 0;i < 8;i++) {
		if (i+1 != v[i]) {
			astrue = false;
			break;
		}
	}
	bool detrue = true;
	if (!astrue) {
		for (int i = 8;i >= 1;i--) {
			if (i != v[8-i]) {
				detrue = false;
				break;
			}
		}
	}
	if (astrue) cout << "ascending";
	else if (detrue) cout << "descending";
	else if (!astrue && !detrue) cout << "mixed";

	return 0;
}