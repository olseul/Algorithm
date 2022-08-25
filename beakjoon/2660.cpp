#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
vector <int> v[51];
vector <pair<int,int>> num;
queue <int> q;
int score[51] = { 0, };
int bfs() {
	int max = -1;
	while (!q.empty()) {
		int inq = q.front();

		q.pop();

		if (max < score[inq]) {
			max = score[inq];
		}

		for (int i = 0;i < v[inq].size();i++) {
			int tmp = v[inq][i];
			if (!score[tmp]) {
				q.push(tmp);
				score[tmp] = score[inq] + 1;
			}
		}
	}
	return max-1;
}
int main() {
	int n;
	cin >> n;

	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == -1 && b == -1) break;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1;i <= n;i++) {
		q.push(i);
		score[i] = 1;

		int minscore = bfs();
		num.push_back({ minscore,i });
		memset(score, 0, sizeof(score));
	}

	sort(num.begin(), num.end());
	
	cout << num[0].first<<' ';

	int cnt = 1;
	for (int i = 1;i < n;i++) {
		if (num[0].first == num[i].first) {
			cnt++;
		}
	}

	cout << cnt << '\n';
	for (int i = 0;i < cnt;i++) {
		cout << num[i].second << ' ';
	}
	return 0;
}