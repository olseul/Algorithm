#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
vector <pair<int, int>> v[1001];
int dist[1001];
queue <int> q;
int bfs(int a, int b) {
	q.push(a);
	dist[a] = 0;

	while (!q.empty()) {
		int inq = q.front();

		q.pop();

		for (int i = 0;i < v[inq].size();i++) {
			int tmp = v[inq][i].first;
			int cost = v[inq][i].second;

			if (dist[tmp] > 0) continue; //방문했던
			dist[tmp] = dist[inq] + cost;
			q.push(tmp);
			
		}
	}
	return dist[b];
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n-1;i++) {
		int n1, n2, r;
		cin >> n1 >> n2 >> r;
		v[n1].push_back({ n2,r });
		v[n2].push_back({ n1,r });
	}

	for (int i = 0;i < m;i++) {
		int a, b;
		cin >> a >> b;
		cout << bfs(a, b) << '\n';
		memset(dist, 0, sizeof(dist));
	}
	return 0;
}