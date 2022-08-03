#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector <int> v[100001];
int res[100001];
int visited[100001] = { 0, };
queue <int> q;
void bfs() {
	q.push(1);
	visited[1] = 1;
	
	while (!q.empty()) {
		int inq = q.front();
		q.pop();

		for (int i = 0;i < v[inq].size();i++) {
			int tmp = v[inq][i];
			if (!visited[tmp]) {
				res[tmp] = inq;
				q.push(tmp);
				visited[tmp] = 1;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;

	for (int i = 0;i < n-1 ;i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	bfs();

	for (int i = 2;i <= n;i++) {
		cout << res[i] << '\n';
	}

	return 0;
}