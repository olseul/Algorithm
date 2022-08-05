#include<iostream>
#include<queue>
using namespace std;
char map[1001][1001];
int visited[1001][1001] = { 0, };
queue <pair<int,int>> q;
int n, m;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (!visited[ny][nx] && map[ny][nx]=='0') {
					q.push({ ny,nx });
					visited[ny][nx] = 1;
				}
			}
		}
	}
}
int main() {
	cin >> m >> n;

	for (int i = 0;i < m;i++) {
		cin >> map[i];
	}

	for (int j = 0;j < n;j++) {
		if (map[0][j]=='0' && !visited[0][j]) {
			q.push({ 0,j });
			visited[0][j] = 1;
			bfs();
		}
	}

	for (int i = 0;i < n;i++) {
		if (visited[m - 1][i]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}