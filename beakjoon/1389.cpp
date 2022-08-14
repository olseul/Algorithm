#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int n, m;
vector <int> v[101];
int visited[101] = { 0, };
int res[101] = { 0, };
int cnt[101] = { 0, };
queue <int> q;
void bfs(int r) {

	visited[r] = 1;
	q.push(r);

	while (!q.empty()) {
		int inq = q.front();
		q.pop();

		for (int i = 0; i < v[inq].size(); i++) {
			int tmp = v[inq][i];
			if (!visited[tmp]) {
				visited[tmp] = 1;

				q.push(tmp);
				cnt[tmp] = cnt[inq] + 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		res[r] += cnt[i];
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		bfs(i);
		memset(visited, 0, sizeof(visited));
		memset(cnt, 0, sizeof(cnt));
	}

	int min = res[1];
	int person = 1;
	for (int i = 2; i <= n; i++) {
		if (min > res[i]) {
			min = res[i];
			person = i;
		}
	}

	cout << person;

	return 0;
}