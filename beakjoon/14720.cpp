#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int store[1000];
	int milk = 0; // ó�����δ� ���� ������ ���ž��Ѵ�.

	for (int i = 0;i < n;i++) {
		cin >> store[i];
	}

	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (store[i]==0 && milk == 0) { // ������� �Ĵ� ���԰�, ���ž��ϴ� ������ ���� �������?
			cnt++;
			milk = 1; 
		}
		else if (store[i] == 1 && milk == 1) {
			cnt++;
			milk = 2;
		}
		else if (store[i] == 2 && milk == 2) {
			cnt++;
			milk = 0;
		}
	}

	cout << cnt;

	return 0;
}