#include<iostream>
#include<queue>
using namespace std;
queue <pair<int,int>> q;
int n, m;
int tgx, tgy;
int map[1001][1001];
int dist[1001][1001];
int visited[1001][1001] = { 0, };
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void bfs() {

	q.push({ tgy,tgx });
	visited[tgy][tgx] = 1;
	dist[tgy][tgx] = 0;

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 > nx || nx >= m || 0 > ny || ny >= n) continue;
			if (!visited[ny][nx] && map[ny][nx] == 1) {
				q.push({ny,nx});
				visited[ny][nx] = 1;
				dist[ny][nx] = dist[y][x] + 1;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				tgx = j;
				tgy = i;
			}
		}
	}

	
	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == 0 && map[i][j] == 1) {
				cout << -1 << ' ';
			}
			else {
				cout << dist[i][j] << ' ';
			}
		}
		cout << '\n';
	}






	return 0;
}