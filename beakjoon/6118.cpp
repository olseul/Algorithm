#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m;
vector <int> v[20001];
int dis[20001];
int visited[20001]={0,};
queue <pair<int,int>> q;
void bfs() {
	q.push({ 1,0 });
	visited[1] = 1;

	while (!q.empty()) {
		int inq = q.front().first;
		int cnt = q.front().second;
		dis[inq] = cnt;
		q.pop();

		for (int i = 0;i < v[inq].size();i++) {
			int tmp = v[inq][i];

			if (!visited[tmp]) {
				q.push({ tmp, cnt + 1 });
				visited[tmp] = 1;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	bfs();

	int max = dis[1];
	int index = 1;
	int num = 0;
	for (int i = 2;i <= n;i++) {
		if (max < dis[i]) {
			max = dis[i];
			index = i;
		}
	}

	for (int i = 1;i <= n;i++) {
		if (dis[i] == max) {
			num++;
		}
	}

	cout << index << ' ' << max << ' ' << num;

	return 0;
}