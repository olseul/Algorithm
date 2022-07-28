#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int map[51][51];
int visited[51][51] = { 0, };
int dx[4] = { 0,0,1,-1 }; // 상 하 좌 우
int dy[4] = { 1,-1,0,0 };
queue<pair<int, int>> q;
int n, m, k;
void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop(); 

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < m && 0 <= ny && ny < n) { 
				if (!visited[ny][nx] && map[ny][nx]) {
					visited[ny][nx] = 1;
					q.push({ ny,nx });
				}
			}
		}
	}
}
int main() {
	int t;
	cin >> t;

	for (int a = 0;a < t;a++) {
		int cnt = 0;
		cin >> m >> n >> k; // 가로길이 세로길이 배추있는위치
		for (int i = 0;i < k;i++) {
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				if (!visited[i][j] && map[i][j]) {
					q.push({ i,j });
					visited[i][j] = 1;
					bfs();
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
		memset(visited, 0, sizeof(visited));
		memset(map, 0, sizeof(map));
	}
	return 0;
}