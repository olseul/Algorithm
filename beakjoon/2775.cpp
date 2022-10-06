#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int dp[15][15]={0,};
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        for(int j=0;j<15;j++){
            dp[0][j]=j;
        }
        for(int j=1;j<=n;j++){
            for(int l=1;l<=k;l++){
                dp[j][l] = dp[j-1][l]+dp[j][l-1];
            }
        }

        cout<<dp[n][k]<<'\n';
    }
}