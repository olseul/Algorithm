#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector <int> v[1001];
queue <int> q;
int visitied[1001] = { 0, };
int a, b, n, m;
int cnt[1001] = { 0, };
void bfs() {
	q.push(a);
	visitied[a] = 1;

	while (!q.empty()) {
		int inq = q.front();
		q.pop();

		if (inq == b) {
			cout << cnt[b];
			return;
		}

		for (int i = 0;i < v[inq].size();i++) {
			int tmp = v[inq][i];

			if (!visitied[tmp]) {
				q.push(tmp);
				visitied[tmp] = 1;
				cnt[tmp] = cnt[inq] + 1;
			}
		}
	}

	cout << -1;
}
int main() {
	cin >> a >> b;
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int n1, n2;
		cin >> n1 >> n2;

		v[n1].push_back(n2);
		v[n2].push_back(n1);
	}

	bfs();
	return 0;
}