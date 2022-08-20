#include<iostream>
#include<queue>
using namespace std;
int m, n;
queue <pair<int, int>> q;
int map[251][251];
int visited[251][251] = { 0, };
int dx[] = { 0,0,1,-1,-1,-1,1,1 };
int dy[] = { 1,-1,0,0 ,1,-1,1,-1};
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (1 > m || m > 250 || 1 > n || n > 250) continue;
			if (!visited[ny][nx] && map[ny][nx] == 1) {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
			}
		}
	}
}
int main() {
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && map[i][j] == 1) {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}