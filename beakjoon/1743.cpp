#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, k;
int map[102][102];
int visited[102][102] = { 0, };
queue <pair<int, int>> q;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int cnt = 1;
vector <int> v;
void bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (ny<0 || nx<0 || ny>n || nx>m) continue;
			if (map[ny][nx] == 1 && !visited[ny][nx]) {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
				cnt++;
			}
		}
	}
}
int main() {
	cin >> n >> m >> k;
	for (int i = 0;i < k;i++) {
		int r, c;
		cin >> r >> c;
		map[r][c] = 1;
	}

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();
				v.push_back(cnt);
				cnt = 1;
			}
		}
	}

	sort(v.begin(), v.end());

	cout << v[v.size() - 1];

	return 0;
}