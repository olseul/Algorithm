#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int map[25][25];
int visited[25][25] = { 0, };
queue <pair<int, int>> q;
vector <int> v;
int n;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int num=0;
void bfs() {
	num++;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0;i < 4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
				if (!visited[ny][nx] && map[ny][nx]) {
					q.push({ ny,nx });
					visited[ny][nx] = 1;
					num++;
				}
			}
		}
	}
}
int main() {
	cin >> n;

	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;

		for (int j = 0;j < n;j++) {
			map[i][j] = s[j] - '0';
		}
	}


	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] && !visited[i][j]) {
				q.push({ i,j });
				visited[i][j] = 1;
				num = 0;
				bfs();
				v.push_back(num);
			}
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';
	for (int i = 0;i < v.size();i++) {
		cout << v[i]<<'\n';
	}

	

	return 0;
}