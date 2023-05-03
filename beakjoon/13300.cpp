#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[6][2]={0,};
    for(int i=0;i<n;i++){
        int s,y;
        cin>>s>>y;
        arr[y-1][s]++;
    }
    int cnt=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            cnt+=(arr[i][j]+k-1)/k;
        }
    }
    cout<<cnt;
    return 0;
}