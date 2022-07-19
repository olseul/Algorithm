#include<iostream>
#include<string>
#include<deque>
using namespace std;
#define endl '\n'
int main() {
	int n;
	cin >> n;
	deque <int> d;
	for (int i = 0;i < n;i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_front") {
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (cmd == "push_back") {
			int x;
			cin >> x;
			d.push_back(x);
		}
		else if (cmd == "pop_front") {
			if (d.empty()) { cout << -1 << endl; continue; }
			int x = d.front();
			cout << x << endl;
			d.pop_front();
		}
		else if (cmd == "pop_back") {
			if (d.empty()) { cout << -1 << endl; continue; }
			int x = d.back();
			cout << x << endl;
			d.pop_back();
		}
		else if (cmd == "size") {
			cout << d.size() << endl;
		}
		else if (cmd == "empty") {
			if (d.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (cmd == "front") {
			if (d.empty()) { cout << -1 << endl; continue; }
			cout << d.front()<<endl;
		} 
		else if (cmd == "back") {
			if (d.empty()) { cout << -1 << endl; continue; }
			cout << d.back() << endl;
		}
	}
	return 0;
}