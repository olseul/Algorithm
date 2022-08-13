#include<iostream>
#include<queue>
using namespace std;
int r, c;
char graph[251][251];
int visited[251][251] = { 0, };
queue <pair<int, int>> q;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int vcnt, ocnt;
void bfs() {
	vcnt = 0, ocnt = 0;

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;

		if (graph[y][x] == 'v') {
			vcnt++;
		}
		else if(graph[y][x] == 'o') {
			ocnt++;
		}

		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < c && 0 <= ny && ny < r) {
				if (!visited[ny][nx] && graph[ny][nx] != '#') {
					q.push({ ny,nx });
					visited[ny][nx] = 1;
				}
			}
		}
	}
}
int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> graph[i];
	}

	int vnum = 0, onum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (!visited[i][j] && graph[i][j] != '#') {
				q.push({ i,j });
				visited[i][j] = 1;
				bfs();

				if (vcnt >= ocnt) {
					vnum += vcnt;
				}
				else {
					onum += ocnt;
				}
			}
		}
	}

	cout << onum << ' ' << vnum;
	return 0;
}