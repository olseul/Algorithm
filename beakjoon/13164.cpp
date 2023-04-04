#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr;
vector<int> cost;
int N, K;
int main()
{
	cin >> N >> K;
	arr.resize(N);
	cost.resize(N - 1);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++)
	{
		cost[i - 1] = arr[i] - arr[i - 1]; 
	}
	sort(cost.begin(), cost.end());
   
	long long ans = 0;
   
	for (int i = 0; i < N - K; i++)
	{
		ans += cost[i];
	}
	cout << ans;
	return 0;
}