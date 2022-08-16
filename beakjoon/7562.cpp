#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int visited[301][301];
int graph[301][301];
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { 2,1,-1,-2,-2,-1,1,2 };
int I,a, b, c, d;
queue <pair<int, int>> q;
void bfs(int a, int b) {
	q.push({ a,b });
	visited[a][b] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		if (c == x && y == d) {
			cout<<graph[x][y]<<'\n';

			while (!q.empty()) {
				q.pop();
			}
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < I && 0 <= ny && ny < I) {
				if (!visited[nx][ny]) {
					q.push({ nx,ny });
					visited[nx][ny] = 1;
					graph[nx][ny] = graph[x][y] + 1;
				}
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> I;
		cin >> a >> b >> c >> d;
		bfs(a,b);

		memset(graph, 0, sizeof(graph));
		memset(visited, 0, sizeof(visited));
	}
	return 0;
}