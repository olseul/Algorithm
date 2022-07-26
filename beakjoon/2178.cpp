#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int n, m;

int v[101][101]; // 미로를 기록한다.
int visited[101][101];// 방문 여부를 기록한다.
int dist[101][101]; // 이동칸을 기록한다.


int dx[] = { 0, 1, 0, -1 };//시계방향
int dy[] = { -1, 0, 1, 0 };

queue <int> q;
void BFS(int x,int y) {
	visited[x][y] = 1; // 1,1에 방문
	dist[x][y] = 1; // 현재 칸은 1,1
	queue<pair<int, int>> q;
	q.push({ x,y });

	while (!q.empty()) {
		int xx = q.front().first; // 현재 x칸
		int yy = q.front().second; // 현재 y칸
		q.pop();
		for (int i = 0;i < 4;i++) {
			int nx = xx + dx[i]; // 인접한 수를 넣었을 때의 현재 이동칸
			int ny = yy + dy[i]; 

			if (1 <= nx && nx <= n && 1 <= ny && ny <= m) { 
				if (!visited[nx][ny] && v[nx][ny]) { // 방문 전이고, 이동 가능한 칸인지?
					visited[nx][ny] = 1; // 방문 기록
					q.push({ nx,ny }); // 큐에 기록
					dist[nx][ny] = dist[xx][yy] + 1; // 
				}
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		string s;
		cin >> s;
		for (int j = 0;j < s.size();j++) {
			v[i][j + 1] = s[j] - '0';
		}
	}

	BFS(1,1);

	cout << dist[n][m];
	return 0;
}