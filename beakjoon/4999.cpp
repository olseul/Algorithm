#include<iostream>
#include<string>
using namespace std;
int main() {
	string j;
	string doctor;
	cin >> j;
	cin >> doctor;

	if (j.size() >= doctor.size()) cout << "go";
	else cout << "no";
	return 0;
}