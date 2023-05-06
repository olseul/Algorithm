#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int cnt=a/2+b;
    if(n>cnt){
        cout<<cnt;
    }else{
        cout<<n;
    }
    return 0;
}