#include<iostream>
#include<queue>
using namespace std;
queue <pair<long long, long long>> q;
long long a, b;
void bfs() {
	q.push({ a,1 });

	while (!q.empty()) {
		long long x = q.front().first;
		long long cnt = q.front().second;

		q.pop();

		if (x == b) {
			cout << cnt;
			return;
		}

		long long nx = x * 2;
		if (1 <= nx && nx <= b) {
			q.push({ nx,cnt + 1 });
		}

		nx = x * 10 + 1;
		if (1 <= nx && nx <= b) {
			q.push({ nx,cnt + 1 });
		}
	}

	cout << "-1";
}
int main() {
	cin >> a >> b;

	bfs();
	return 0;
}