#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int map[101][101];
int n;
queue <pair<int, int>> q;
int visited[101][101] = { 0, };
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
vector <int> v;
void bfs(int he) {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 > nx || nx >= n || 0 > ny || ny >= n) continue;
			if (map[ny][nx] > he && !visited[ny][nx]) {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
			}
		}
	}
}
int main() {
	cin >> n;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> map[i][j];
		}
	}

	bool ex1 = true;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] != 1) {
				ex1 = false;
				break;
			}
		}
	}
	if (!ex1) {
		for (int i = 1;i < 100;i++) {
			int cnt = 0;
			for (int j = 0;j < n;j++) {
				for (int k = 0;k < n;k++) {
					if (map[j][k] > i && !visited[j][k]) {
						q.push({ j,k });
						visited[j][k] = 1;
						bfs(i);
						cnt++;
					}
				}
			}
			v.push_back(cnt);
			memset(visited, 0, sizeof(visited));
		}

		sort(v.begin(), v.end());

		cout << v[v.size() - 1];
	}
	else {
		cout << 1;
	}
	return 0;
}