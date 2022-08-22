#include<iostream>
#include<queue>
using namespace std;
int n;
int map[201][201];
int cnt[201][201];
int visited[201][201] = { 0, };
queue <pair<int, int>> q;
int dx[] = { -2,-2,0,0,2,2 };
int dy[] = { -1,1,-2,2,-1,1 };
int r1, c1, r2, c2;
void bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		if (x == r2 && y == c2) {
			cout << cnt[x][y];
			return;
		}

		for (int i = 0;i < 6;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 > nx || nx > n || 0 > ny || ny > n) continue;
			if (!visited[nx][ny]) {
				q.push({ nx,ny });
				visited[nx][ny] = 1;
				cnt[nx][ny] = cnt[x][y] + 1;
			}
		}
	}
	cout << -1;
}
int main() {
	cin >> n;
	cin >> r1 >> c1 >> r2 >> c2;

	q.push({ r1,c1 });
	visited[r1][c1] = 1;
	cnt[r1][c1] = 0;

	bfs();

	return 0;
}