#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector <int> v[100001]; 
int visited[100001] = { 0, }; // �湮�� ���
int result[100001]; // �湮�� ����
int cnt = 0;
void BFS(int r) {
	queue<int> q;
	q.push(r); 
	visited[r] = 1; // ó�� �湮�� �� ǥ��
	cnt++; // ó�� �湮�� �� + 1
	result[r] = cnt;
	while (!q.empty()) { // ť�� �����ɶ�����
		int inq = q.front(); // ť�� ù��° ���� ����

		q.pop(); // ����

		for (int i = 0;i < v[inq].size();i++) { // ��忡 ����� ũ�⸸ŭ �ݺ�
			int tmp = v[inq][i]; // ��忡 ����� ��� �ӽ� ����
			if (!visited[tmp]) { // �湮���� ���� �����?
				cnt++;
				result[tmp] = cnt; // �湮�� ���� 
				q.push(tmp); // ť�� �ְ�
				visited[tmp] = 1; //�湮ó���Ѵ�.
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