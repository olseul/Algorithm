#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int n, m;
char map[51][51];
int visited[51][51] = { 0, };
int dis[51][51] = { 0, };
queue <pair<int,int>> q;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
vector <int> v;
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 > nx || nx >= m || 0 > ny || ny >= n)  continue;
			if (!visited[ny][nx] && map[ny][nx] == 'L') {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
				dis[ny][nx] = dis[y][x] + 1;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> map[i];
	}


	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (map[i][j] == 'L') {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();

				for (int k = 0;k < n;k++) {
					for (int t = 0;t < m;t++) {
						if (dis[k][t]) {
							v.push_back(dis[k][t]);
						}
					}
				}

				memset(visited, 0, sizeof(visited));
				memset(dis, 0, sizeof(dis));
			}
		}
	}

	sort(v.begin(), v.end());

	cout << v[v.size() - 1];

	return 0;
}