#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v(n+1);
    for(int i=1;i<=n;i++){
        v[i]=i;
    }
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        int tmp=v[b];
        v[b]=v[a];
        v[a]=tmp;
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}