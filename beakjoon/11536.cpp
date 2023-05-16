#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int ans = -1;
    if(str[0]<str[1]){ //만약 증가한다면?
        ans = 0;
    }else if(str[0]>str[1]){
        ans = 1;
    }
    for(int i=1;i<n-1;i++){
        if(!ans && str[i]>str[i+1]){ //이 전이 증가했고, 이번턴이 감소한다면
            cout<<"NEITHER";
            return 0;
        }
        else if(ans && str[i]<str[i+1]){ 
            cout<<"NEITHER";
            return 0;
        }
    }
    if(ans){
        cout<<"DECREASING";
    }
    else{
        cout<<"INCREASING";
    }
    return 0;
}
