#include<iostream>
#include<queue>
#include <cstring>
using namespace std;
queue<pair<int, int>> q;
int visited[50][50];
int map[50][50];
int dx[8] = { 1,1,0,-1,-1,-1,0,1 }, dy[8] = { 0,1,1,1,0,-1,-1,-1 };
int w, h;
void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int i = 0;i < 8;i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
			if (map[ny][nx] && !visited[ny][nx]) {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
			}
		}
	}
}
int main() {
	while (1)
	{
		int cnt = 0;
		cin >> w >> h;
		if (!w && !h) break;

		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				if (!visited[i][j] && map[i][j]) {
					q.push({ i,j });
					visited[i][j] = 1;
					bfs();
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		memset(visited, 0, sizeof(visited));
	}
	return 0;
}