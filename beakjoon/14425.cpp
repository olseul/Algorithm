#include <iostream>
#include <map>
using namespace std;
map<string, bool> m;
int N, M;
string str;

int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		m.insert({str, true});
	}

    int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (m[str]==true)
			cnt++;
	}
	cout << cnt;

}