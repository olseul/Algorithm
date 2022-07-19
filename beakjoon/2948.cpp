#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	stack<int> s;
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		string Command;
		cin >> Command;
		if (Command == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (Command == "pop") {
			if (s.empty()){cout << -1 << '\n'; continue;}
			int x = s.top();
			s.pop();
			cout << x<<'\n';
		}
		else if (Command == "size") {
			cout << s.size()<< '\n';
		}
		else if (Command == "empty") {
			if (s.empty()) cout << 1 << '\n';
			else cout << 0<< '\n';
		}
		else if(Command == "top") {
			if (s.empty()){cout << -1<< '\n'; continue;}
			cout << s.top()<< '\n';
		}
	}

	return 0;
}