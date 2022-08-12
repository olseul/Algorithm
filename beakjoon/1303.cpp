#include<iostream>
#include<queue>
using namespace std;
int n, m;
char graph[101][101];
int visited[101][101] = { 0, };
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
queue <pair<int, int>> q;
int cnt = 1;
void bfs(char ch) {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (!visited[ny][nx] && graph[ny][nx] == ch) {
					q.push({ ny,nx });
					visited[ny][nx] = 1;
					cnt++;
				}
			}
		}
	}
}

void init() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = 0;
		}
	}

	cnt = 1;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> graph[i];
	}

	int wcnt = 0, bcnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && graph[i][j] == 'W') {
				visited[i][j] = 1;
				q.push({ i,j });
				bfs('W');
				wcnt = wcnt + cnt * cnt;
				cnt = 1;
			}
		}
	}

	init();

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && graph[i][j] == 'B') {
				visited[i][j] = 1;
				q.push({ i,j });
				bfs('B');
				bcnt = bcnt + cnt * cnt;
				cnt = 1;
			}
		}
	}

	cout << wcnt << ' '<<bcnt;
	return 0;
}