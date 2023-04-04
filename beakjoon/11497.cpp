#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T;
	cin >>T;
	while(T--){
		int N,ans=0;
		cin >> N;
		int log_arr[N];
		for(int i = 0 ;i < N;i++) cin>> log_arr[i];

		sort(log_arr,log_arr+N);
		
		for(int i = 0 ; i <N-2 ;i++){
			ans = max(log_arr[i+2]-log_arr[i], ans);
		}
		cout<<ans<<"\n";
	}
	return 0;
}