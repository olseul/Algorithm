#include<iostream>
#include<queue>
using namespace std;
int map[1000][1000];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
queue <pair<int, int>> q;
int cnt = 0;
int n, m;
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (map[ny][nx]==0) {
					q.push({ ny,nx });
					map[ny][nx] = map[y][x] + 1; 
				}
			}
		}
		cnt++;
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cin >> map[i][j]; 
		}
	}

	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j]==1) {
				q.push({ i,j }); //익은 토마토(출발점) 찾기
			}
		}
	}

	bfs();

	int cnt = 0;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			if (!map[i][j]) {
				cout << "-1";
				return 0;
			}
			if (cnt < map[i][j]) {
				cnt = map[i][j];
			}
		}
	}
	cout << cnt - 1;
	return 0;
}