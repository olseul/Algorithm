#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct STUDENT
{
	string name;
	int kor, eng, math;
};

bool Condition (STUDENT a, STUDENT b) {
	if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) return a.name < b.name;
	else if (a.kor == b.kor && a.eng == b.eng) return a.math > b.math;
	else if (a.kor == b.kor) return a.eng < b.eng;
	return a.kor > b.kor;
}

int main() {
	int n;
	cin >> n;
	vector<STUDENT> v(n);

	for (int i = 0;i < n;i++) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), Condition);

	for (int i = 0;i < n;i++) {
		cout << v[i].name << '\n';
	}

	return 0;
}