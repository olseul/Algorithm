#include<iostream>
#include<queue>

using namespace std;

int a, b, n, m;
int visited[100001] = { 0, };
int rock[100001] = { 0, };

int main() {
	cin >> a >> b >> n >> m;

	int dx[8] = { 1,-1,a,b,-a,-b,a,b };
	queue <int> q;
	q.push(n);
	visited[n] = 1;
	rock[n] = 0;

	while (!q.empty()) {
		int inq = q.front();
		q.pop();
		if (inq == m) {
			cout << rock[m];
			break;
		}

		for (int i = 0;i < 6;i++) {
			int tmp = inq + dx[i];

			if (0 > tmp || tmp > 100000) continue;
			if (!visited[tmp]) {
				visited[tmp] = 1;
				rock[tmp] = rock[inq] + 1;
				q.push(tmp);
			}
		}

		for (int i = 6;i < 8;i++) {
			int tmp = inq * dx[i];

			if (0 > tmp || tmp > 100000) continue;
			if (!visited[tmp]) {
				visited[tmp] = 1;
				rock[tmp] = rock[inq] + 1;
				q.push(tmp);
			}
		}
	}
	return 0;
}