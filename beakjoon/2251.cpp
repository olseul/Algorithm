#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int A, B, C;
int visited[201][201][201];
vector <int> v;
void bfs() {
	queue <pair<pair<int, int>, int>> q;
	q.push({ {0,0},C });

	while (!q.empty()) {
		int a = q.front().first.first;
		int b = q.front().first.second;
		int c = q.front().second;

		q.pop();

		if (visited[a][b][c] == 1) continue;
		visited[a][b][c] = 1;

		if (a == 0) v.push_back(c);

		//a->b
		if (a + b > B) q.push({ { a + b - B,B }, c });
		else q.push({ {0,a + b},c });

		//a->c
		if (a + c > C) q.push({ { a + c - C,b }, C });
		else q.push({ {0,b},a + c });

		//b->a
		if (a + b > A) q.push({ { A,b + a - A }, c });
		else q.push({ {b + a,0},c });

		//b->c
		if (b + c > C) q.push({ { a,b + c - C }, C });
		else q.push({ {a,0},b + c });

		//c->a
		if (c + a > A) q.push({ { A,b }, c + a - A });
		else q.push({ {c + a,b},0 });

		//c->b
		if (c + b > B) q.push({ { a,B }, c + b - B });
		else q.push({ {a,b + c},0 });

	}

	sort(v.begin(), v.end());
	for (int i = 0;i < v.size();i++) {
		cout << v[i] << ' ';
	}cout << '\n';

}
int main() {
	cin >> A>> B >> C;

	bfs();
	return 0;
}