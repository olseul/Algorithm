#include <iostream>
using namespace std;

int main() {

	int a, b;
	//���� ��(EOF)�� ������ ������ ����Ѵٴ� ��
	//���� ���� �ǹ��ϴ� EOF�� �а� �Ǹ�, true������ �ٲ��.
	while (cin >> a >> b) { //!cin.eof()�ε� ����
		cout << a + b << endl;
	}
	return 0;
}