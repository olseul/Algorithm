#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;

	string bitBefore;
	cin >> bitBefore;

	string bitAfter;
	cin >> bitAfter;

	for (int i = 0;i < bitBefore.size(); i++) {
		for (int j = 0;j < n;j++) {
			if (bitBefore[i]=='0') bitBefore[i] = '1';
			else bitBefore[i] = '0';
		}
	}

	bool Deletion = true;
	for (int i = 0;i < bitBefore.size();i++) {
		if (bitBefore[i] != bitAfter[i]) Deletion = false;
	}

	if (!Deletion) cout << "Deletion failed";
	else cout << "Deletion succeeded";

	return 0;
}