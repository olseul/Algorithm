#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector <string> v;
int main() {
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		v.push_back(str);
	}

	int alp[26]={0,};
	for (int i = 0; i < v.size(); i++) {
		int pow = 1;
		for (int j = v[i].size() - 1; j >= 0; j--) {
			int val = v[i][j] - 'A';
			alp[val] += pow;
			pow *= 10;
		}
	}
	sort(alp, alp + 26);
	int result = 0;
	int num = 9;
	for (int i = 25; i >= 0; i--) {
		if (alp[i] == 0) break;
		result += (alp[i] * num);
		num--;
	}
	cout << result;
	
	return 0;
}