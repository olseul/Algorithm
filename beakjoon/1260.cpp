#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> graph[1001];
int bfsvisited[1001] = { 0, };
int dfsvisited[1001] = { 0, };
queue<int> q;
void DFS(int r) {
	dfsvisited[r] = 1;
	cout << r << ' ';

	for (int i = 0;i < graph[r].size();i++) {
		int tmp = graph[r][i];
		if (!dfsvisited[tmp]) {
			DFS(tmp);
		}
	}
}
void BFS(int r) {
	bfsvisited[r] = 1;
	q.push(r);
	cout << r << ' ';

	while (!q.empty()) {
		int inq = q.front(); 
		q.pop();

		for (int i = 0;i < graph[inq].size();i++) {
			int tmp = graph[inq][i];
			if (!bfsvisited[tmp]) {
				bfsvisited[tmp] = 1;
				q.push(tmp);
				cout << tmp << ' ';
			}
		}
	}
}
int main() {
	int n, m, r;
	cin >> n >> m >> r;
	for (int i = 0;i < m;i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	 
	for (int i = 1;i <= n;i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(r);
	cout << '\n';
	BFS(r);

	return 0;
}