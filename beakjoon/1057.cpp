#include<iostream>
using namespace std;
int main() {
	int n, kim, Lim;

	cin >> n >> kim >> Lim;
	
	int cnt = 1;
	while (1) {

		// �达�� �Ӿ��� �ܷ�� �� ��, �ݺ��� ����
		if (!(kim % 2) && (Lim % 2)) { // �达�� ¦���� �Ӿ��� Ȧ��
			if (Lim == (kim - 1)) {
				break;
			}
		}
		else if ((!(Lim % 2) && (kim % 2))) { // �Ӿ��� ¦���� �达�� Ȧ��
			if (kim == (Lim - 1)) {
				break;
			}
		}

		// �����ΰ� ���Ѽ��� ���� ���� ��ȣ
		if (kim % 2) kim = kim / 2 + 1; // �达�� Ȧ��
		else if (!(kim % 2)) kim = kim / 2; // �达�� ¦��
		if (Lim % 2) Lim = Lim / 2 + 1; // �Ӿ��� Ȧ��
		else if (!(Lim % 2)) Lim = Lim / 2; // �Ӿ��� ¦��

		// ���� �� ����
		cnt++;
	}
	cout << cnt;
	return 0;
}