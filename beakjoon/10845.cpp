#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	queue <int> q;
	string cmd;
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (cmd == "pop") {
			if (q.empty()) { cout << -1 << '\n';continue; }
			int x = q.front();
			cout << x<<'\n';
			q.pop();
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			if (q.empty()) cout << 1<<'\n';
			else cout << 0 << '\n';
		}
		else if (cmd == "front") {
			if(q.empty()) { cout << -1 << '\n';continue; }
			cout << q.front() << '\n';
		}
		else if (cmd == "back") {
			if (q.empty()) { cout << -1 << '\n';continue; }
			cout << q.back() << '\n';
		}ss
		
	}
	return 0;
}
