#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int time[101]={0,};
    for(int i=0;i<3;i++){
        int s,e;
        cin>>s>>e;
        for(int j=s;j<e;j++){
            time[j]++;
        }
    }

    int cnt=0;
    for(int i=0;i<101;i++){
        if(time[i]==1){
            cnt+=a;
        }
        else if(time[i]==2){
            cnt+=b*2;
        }
        else if(time[i]==3){
            cnt+=c*3;
        }
    }
    cout<<cnt;
    return 0;
}