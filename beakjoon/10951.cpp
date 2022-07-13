#include <iostream>
using namespace std;

int main() {

	int a, b;
	//파일 끝(EOF)에 도달할 때까지 출력한다는 뜻
	//파일 끝을 의미하는 EOF를 읽게 되면, true값으로 바뀐다.
	while (cin >> a >> b) { //cin>>a>>b로도 가능
		cout << a + b << endl;
	}
	return 0;
}