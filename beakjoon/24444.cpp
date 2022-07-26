#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector <int> v[100001]; 
int visited[100001] = { 0, }; // 방문된 노드
int result[100001]; // 방문한 순서
int cnt = 0;
void BFS(int r) {
	queue<int> q;
	q.push(r); 
	visited[r] = 1; // 처음 방문한 곳 표시
	cnt++; // 처음 방문한 곳 + 1
	result[r] = cnt;
	while (!q.empty()) { // 큐가 소진될때까지
		int inq = q.front(); // 큐에 첫번째 원소 저장

		q.pop(); // 제거

		for (int i = 0;i < v[inq].size();i++) { // 노드에 연결된 크기만큼 반복
			int tmp = v[inq][i]; // 노드에 연결된 노드 임시 저장
			if (!visited[tmp]) { // 방문하지 않은 노드라면?
				cnt++;
				result[tmp] = cnt; // 방문한 순서 
				q.push(tmp); // 큐에 넣고
				visited[tmp] = 1; //방문처리한다.
			} 
		}
	}
}
int main() {
	int n, m, r;
	cin >> n >> m >> r;
	for (int i = 1;i <= m;i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1;i < n;i++) {
		sort(v[i].begin(), v[i].end());
	}
	BFS(r);
	for (int i = 1;i <= n;i++) {
		cout << result[i] << '\n';
	}

	return 0;
}