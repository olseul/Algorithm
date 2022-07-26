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
		int inq = q.front(); // ť�� ù��° ���� ����
		q.pop(); // ����

		for (int i = 0;i < graph[inq].size();i++) { // �ش� ���� ������ ��� ������ŭ �ݺ�
			int tmp = graph[inq][i]; // ���� ��� tmp�� ����
			if (!visited[tmp]) { // �湮���� �ʴ� �����?
				visited[tmp] = 1; // �湮 ���� ����
				q.push(tmp); // ť�� �ֱ�
				cnt++; // �湮�� ��� ����(������ ���)
			}
		}
	}
}
int main() {
	cin >> n; // ���
	cin >> m; // ����

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