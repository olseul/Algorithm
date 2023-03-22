#include <iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m;
    int a[301][301];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(int q=0;q<k;q++){
        int i,j,x,y;
        int sum=0;
        cin>>i>>j>>x>>y;
        for(int u=i;u<=x;u++){
            for(int d=j;d<=y;d++){
                sum+=a[u][d];
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}