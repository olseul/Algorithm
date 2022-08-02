#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
char map[100][100];
int visited[100][100] = {0,};
queue <pair<int,int>> q;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n;
int cnt = 0;
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
				if (!visited[ny][nx] && (map[ny][nx] == map[y][x])) {
					q.push({ ny,nx });
					visited[ny][nx] = 1;
				}
			}
		}
	}
}
int main() {
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> map[i];
	}

	//적록색 약 아닌 사람
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (!visited[i][j]) {
				q.push({ i, j });
				visited[i][j] = 1;
				bfs();
				cnt++;
			}
		}
	}

	cout << cnt<<' ';
	memset(visited, 0, sizeof(visited));
	cnt = 0;


	//적록색 약인 사람
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] == 'G') {
				map[i][j] = 'R';
			}
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (!visited[i][j]) {
				q.push({ i, j });
				visited[i][j] = 1;
				bfs();
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}