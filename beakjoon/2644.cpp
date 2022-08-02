#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector <int> v[101];
queue <pair<int,int>> q;
int visited[101][101] = {0,};
int n, a, b, m;
int d[101] = { 0, };
int bfs() {
	q.push({ a,0 });

	while (!q.empty()) {
		int inq = q.front().first; //현재 번호
		int incnt = q.front().second; //촌수
		q.pop();

		if (inq == b) return incnt; //도달한 경우 촌수 반환

		for (int i = 0;i < v[inq].size();i++) {
			if (visited[inq][v[inq][i]]) continue;

			q.push({v[inq][i], incnt + 1});
			visited[inq][v[inq][i]] = 1;
		}
	}

	return -1;
}
int main() {
	
	cin >> n;

	cin >> a >> b;

	cin >> m;

	int x, y;

	for (int i = 0;i < m;i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	cout<< bfs();

	return 0;
}