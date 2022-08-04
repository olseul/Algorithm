#include<iostream>
#include<queue>
using namespace std;
char map[251][251];
queue <pair<int, int>> q;
int visited[251][251] = { 0, };
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int r, c;
int v, k;
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		if (map[y][x] == 'v') {
			v++;
		}
		else if (map[y][x] == 'k') {
			k++;
		}

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 > ny || ny >= r || 0 > nx || nx >= c) continue;
			if (!visited[ny][nx] && map[ny][nx] != '#') {
				visited[ny][nx] = 1;
				q.push({ ny,nx });
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> r >> c;

	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cin >> map[i][j];
		}
	}

	int kcnt = 0, vcnt = 0;
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			if (!visited[i][j] && map[i][j] != '#') {
				v = 0;
				k = 0;
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();

				// 양이 더 많을 때
				if (v < k) {
					kcnt += k;
				}

				// 늑대가 더 많거나 같을 때
				else {
					vcnt += v;
				}
			}
		}
	}

	cout << kcnt << ' ' << vcnt;



	return 0;
}