#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v;
	int n,cnt=0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		if (find(v.begin(), v.end(), num) == v.end()) {
			v.push_back(num);
			cnt++;
		}
	}
	sort(v.begin(), v.end());
	
	for (int i = 0;i < cnt;i++) {
		cout << v[i] << ' ';
	}
	return 0;
}