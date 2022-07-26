#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int n, m;

int v[101][101]; // �̷θ� ����Ѵ�.
int visited[101][101];// �湮 ���θ� ����Ѵ�.
int dist[101][101]; // �̵�ĭ�� ����Ѵ�.


int dx[] = { 0, 1, 0, -1 };//�ð����
int dy[] = { -1, 0, 1, 0 };

queue <int> q;
void BFS(int x,int y) {
	visited[x][y] = 1; // 1,1�� �湮
	dist[x][y] = 1; // ���� ĭ�� 1,1
	queue<pair<int, int>> q;
	q.push({ x,y });

	while (!q.empty()) {
		int xx = q.front().first; // ���� xĭ
		int yy = q.front().second; // ���� yĭ
		q.pop();
		for (int i = 0;i < 4;i++) {
			int nx = xx + dx[i]; // ������ ���� �־��� ���� ���� �̵�ĭ
			int ny = yy + dy[i]; 

			if (1 <= nx && nx <= n && 1 <= ny && ny <= m) { 
				if (!visited[nx][ny] && v[nx][ny]) { // �湮 ���̰�, �̵� ������ ĭ����?
					visited[nx][ny] = 1; // �湮 ���
					q.push({ nx,ny }); // ť�� ���
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