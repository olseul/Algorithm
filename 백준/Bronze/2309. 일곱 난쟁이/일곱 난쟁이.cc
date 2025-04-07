#include <iostream>
#include<algorithm>
using namespace std;
int find(int arr[],int sum) {
	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				arr[i] = -1;
				arr[j] = -1;
				return 0;
			}
		}
	}
}
int main()
{
	int arr[9],sum=0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	find(arr,sum);
	
	sort(arr, arr + 9);
	for (int i = 2; i < 9; i++) {
		cout << arr[i] << '\n';
	}
}