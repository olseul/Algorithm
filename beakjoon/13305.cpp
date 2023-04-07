#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <long long> distance(n-1);
	vector <long long> cost(n);

	for(int i=0;i<n-1;i++){
		cin>>distance[i];
	}
	for(int i=0;i<n;i++){
		cin>>cost[i];
	}

	long long sum=cost[0]*distance[0];
	long long mincost=cost[0];
	for(int i=1;i<n-1;i++){
		if(mincost>cost[i]){
			mincost=cost[i];
		}
		sum+=mincost * distance[i];
	}
	cout<<sum;
	return 0;
}