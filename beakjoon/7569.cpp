#include<iostream>
#include<queue>
using namespace std;
int map[100][100][100];
int dx[6] = { 0,0,0,0,1,-1 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 1,-1,0,0,0,0 };
queue <pair<pair<int, int>,int>> q;
int cnt = 0;
int n, m, h;
void bfs() {
	while (!q.empty()) {
		int x = q.front().first.second;
		int y = q.front().first.first;
		int z = q.front().second;
		q.pop();

		for (int i = 0;i < 6;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m && 0<= nz && nz<h) {
				if (map[nz][ny][nx] == 0) {
					q.push({ { ny,nx },nz });
					map[nz][ny][nx] = map[z][y][x] + 1;
				}
			}
		}
		cnt++;
	}
}
int main() {
	cin >> n >> m >> h;
	for (int k = 0;k < h;k++) {
		for (int i = 0;i < m;i++) {
			for (int j = 0;j < n;j++) {
				cin >> map[k][i][j];

				if (map[k][i][j] == 1) {
					q.push({ { i,j },k }); //익은 토마토(출발점) 찾기
				}
			}
		}
	}

	bfs();

	int cnt = 0;
	for (int k = 0;k < h;k++) {
		for (int i = 0;i < m;i++) {
			for (int j = 0;j < n;j++) {
				if (!map[k][i][j]) {
					cout << "-1";
					return 0;
				}
				if (cnt < map[k][i][j]) {
					cnt = map[k][i][j];
				}
			}
		}
	}
	cout << cnt - 1;
	return 0;
}