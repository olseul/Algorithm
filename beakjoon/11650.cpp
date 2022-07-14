#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];

	for (int i = 0;i < n;i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0;i < n-1;i++) {
		int min = i+1;
		for (int j = i+2;j < n;j++) {
			if (x[min] > x[j]) {
				min = j;
			}
			else if (x[min] == x[j]) {
				if (y[min] > y[j]) {
					min = j;
				}
			}
		}

		if (x[i] > x[min]) {
			int tmp = x[i];
			x[i] = x[min];
			x[min] = tmp;

			tmp = y[i];
			y[i] = y[min];
			y[min] = tmp;
		}
		else if (x[i] == x[min]) {
			if (y[i] > y[min]) {
				int tmp = y[i];
				y[i] = y[min];
				y[min] = tmp;
			}
		}
	}

	for (int i = 0;i < n;i++) {
		cout << x[i] <<' '<< y[i] << '\n';
	}
	return 0;
}