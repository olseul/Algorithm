#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector <int> graph[1001];
int visited[1001] = { 0, };
queue <int> q;
void bfs() {
	while (!q.empty()) {
		int inq = q.front();

		q.pop();

		for (int i = 0;i < graph[inq].size();i++) {
			int tmp = graph[inq][i];

			if (!visited[tmp]) {
				visited[tmp] = 1;
				q.push(tmp);
			}
		}

	}
}
int main() {
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0;i < m;i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 0;i < n;i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	for (int i = 1;i <= n;i++) {
		if (!visited[i]) {
			visited[i] = 1;
			q.push(i);
			bfs();
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}