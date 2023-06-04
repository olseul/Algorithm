#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int beltnum=n*2;
    int Durability[beltnum];
    for(int i=0;i<beltnum;i++){
        cin>>Durability[i];
    }
    bool robot[n]; //로봇 존재하는지 여부, 처음엔 모두 false로 초기화한다.
    for(int i=0;i<n;i++){
        robot[i]=false;
    }
    int cnt=0;
    while(1){
        int tmp=Durability[beltnum-1];
        for(int i=beltnum-1;i>=1;i--){ //벨트를 회전한다.(내구도를 한칸 씩 옮긴다.)
            Durability[i]=Durability[i-1];
        }
        Durability[0]=tmp;

        for(int i=n-2;i>=0;i--){ //로봇을 회전한다.
            robot[i+1]=robot[i];
        }
        robot[0]=0; //벨트를 회전했으므로 처음자리는 로봇이 없다.
        robot[n-1]=false; //마지막 자리에 로봇이 떨어진다.

        for(int i=n-1;i>=0;i--){
            if(!robot[i] && Durability[i]>=1){
                if(i==0){
                    Durability[0]-=1;
                    robot[0]=true;
                }
                else{
                    if(robot[i-1]){ //전 칸에 로봇이 있다면
                        robot[i-1]=false;
                        Durability[i]-=1;
                        if(i==n-1){
                            robot[n-1]=false; 
                        }else{
                            robot[i]=true;
                        }
                    }
                }
            }
        }
        cnt++;
        int durabilityZero=0;
        for(int i=0;i<beltnum;i++){
            if(!Durability[i]){
                durabilityZero++;
            }
        }
        if(durabilityZero>=k){
            break;
        }
    }
    cout<<cnt;
    return 0;
}