#include<iostream>
#include<queue>
using namespace std;
queue <pair<int,int>> q;
int visited[1001] = { 0, };
int n;
int v[1001];
void bfs() {
	q.push({ 1,0 }); // 첫 번째 인덱스부터 시작
	visited[1] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if (x == n) { cout << cnt; return; }

		for (int i = 1;i <= v[x];i++) {
			int nx = x + i;
			if (!visited[nx] && nx <= n) {
				q.push({ nx,cnt+1});
				visited[nx] = 1;
			}
		}
	}
	cout << -1;
}
int main() {
	cin >> n;
	
	for (int i = 1;i <= n;i++) {
		cin >> v[i];
	}

	bfs();
	return 0;
}