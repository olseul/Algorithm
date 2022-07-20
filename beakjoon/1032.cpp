#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
int main() {
	int n;
	cin >> n;

	string fileName;
	for (int i = 0;i < n;i++) {
		cin >> fileName;
		v.push_back(fileName);
	}

	int len = v[0].size();

	for (int i = 0;i < len;i++) {
		bool same = true;
		for (int j = 1;j < n;j++) {
			if (v[0][i] != v[j][i]) same = false;
		}
		if (!same) cout << "?";
		else cout << v[0][i];	
	}
	return 0;
}