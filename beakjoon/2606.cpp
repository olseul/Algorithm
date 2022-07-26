#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int n, m;
vector<int> graph[101];
int visited[101] = { 0, };
int cnt = 0;
queue<int> q;
void BFS(int r) {
	q.push(r);

	visited[r] = 1; 

	while (!q.empty()) {
		int inq = q.front(); // 큐의 첫번째 원소 저장
		q.pop(); // 제거

		for (int i = 0;i < graph[inq].size();i++) { // 해당 노드와 연관된 노드 갯수만큼 반복
			int tmp = graph[inq][i]; // 연관 노드 tmp에 저장
			if (!visited[tmp]) { // 방문하지 않는 노드라면?
				visited[tmp] = 1; // 방문 여부 갱신
				q.push(tmp); // 큐에 넣기
				cnt++; // 방문한 노드 갯수(감염된 노드)
			}
		}
	}
}
int main() {
	cin >> n; // 노드
	cin >> m; // 간선

	for (int i = 1;i <= m;i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	BFS(1);

	cout << cnt;
	return 0;
}