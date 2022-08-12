#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, k;
int graph[101][101] = { 0, };
int visited[101][101] = { 0, };
queue <pair<int, int>> q;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
vector <int> v;
void bfs() {
	int area = 1;
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (!visited[ny][nx] && !graph[ny][nx]) {
					visited[ny][nx] = 1;
					q.push({ ny,nx });
					area++;
				}
			}
		}
	}

	v.push_back(area);
}
int main() {
	cin >> m >> n >> k;

	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = y1; j < y2; j++) {
			for (int k = x1; k < x2; k++) {
				graph[j][k]=1; // 색칠된 부분을 1로 
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && !graph[i][j]) {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();
				cnt++;
			}
		}
	}
	

	cout << cnt << '\n';

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<' ';
	}


	return 0;
}