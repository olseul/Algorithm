#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int area=0;
    int map[101][101]={0,};
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        for(int j=x;j<x+10;j++){
            for(int k=y;k<y+10;k++){
                if(map[j][k]==1){continue;}
                map[j][k]=1;
                area++;
            }
        }
    }
    cout<<area;
    return 0;
}