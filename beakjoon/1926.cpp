#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int map[501][501];
int visited[501][501] = {0,};
queue <pair<int, int>> q;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int area = 1;
vector <int> v;
int bfs() {
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 > ny || ny>=n || 0>nx || nx>=m) continue;
			if (!visited[ny][nx] && map[ny][nx] == 1) {
				q.push({ ny,nx });
				visited[ny][nx] = 1;
				area++;
			}
		}
	}
	return area;
}
bool compare(int i, int j) {
	return i > j;
}
int main() {
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin>>map[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				q.push({ i,j });
				visited[i][j] = 1;
				int max = bfs();
				cnt++;
				v.push_back(max);
				area = 1;
			}
		}
	}

	sort(v.begin(), v.end(), compare);

	cout << cnt << endl;

	if (cnt == 0) {
		cout << 0 << endl;
	}
	else {
		cout << v[0] << endl;
	}
	return 0;
}