#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long res;
	for (int i = 0;i < t;i++) {
		int n, m;
		res = 1;
		cin >> n >> m;
		//��������
		if ((m / 2) < n) {
			n = (m - n);
		}

		//���� ����
		for (int j = 0;j < n;j++) {
			res *= (m - j);
		}

		//���� �и�
		for (int k = 1;k <= n;k++) {
			res /= k;
		}

		cout<<res<<'\n';
	}
	return 0;
}