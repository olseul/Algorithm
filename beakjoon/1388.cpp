#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
char c[51][51];
int visited[51][51] = { 0, };
queue <pair<int,int>> q;
int n, m;
int dx[2] = { 1,-1 };
int dy[2] = { 1,-1 };
void bfs1() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int i = 0;i < 2;i++) {
			int nx = x + dx[i];
			if (0 <= nx && nx < m && !visited[y][nx] && c[y][nx]=='-') {
				q.push({y,nx });
				visited[y][nx] = 1;
			}
		}
	}

}
void bfs2() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int i = 0;i < 2;i++) {
			int ny = y + dy[i];
			if (0 <= ny && ny < n && !visited[ny][x] && c[ny][x] == '|') {
				q.push({ ny,x });
				visited[ny][x] = 1;
			}
		}
	}

}
int main() {
	cin >> n >> m;
	int cnt1 = 0, cnt2 = 0;

	for (int i = 0;i < n;i++) {
		cin >> c[i];
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (!visited[i][j] && c[i][j] == '-') {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs1();
				cnt1++;
			}
		}
	}

	memset(visited, 0, sizeof(visited));

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (!visited[i][j] && c[i][j] == '|') {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs2();
				cnt2++;
			}
		}
	}

	cout << cnt1+cnt2;
	return 0;
}