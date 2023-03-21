#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[51][51];
    for(int i=0;i<n;i++){
        string num;
        cin>>num;
        for(int j=0;j<m;j++){
            a[i][j]=num[j]-'0';
        }
    }

    int sz=n;
    while(sz!=1){
        for(int i=0;i<n-sz+1;i++){
            for(int j=0;j<m-sz+1;j++){
                int num=a[i][j];
                if(num!=a[i][j+sz-1] || num!=a[i+sz-1][j] || num!=a[i+sz-1][j+sz-1]){
                    continue;
                }else{
                    cout<< sz*sz;
                    return 0;
                }
            }
        }
        sz--;
    }
    cout<<1;
    return 0;
}