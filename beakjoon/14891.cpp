#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int map[4][8]; //4개의 톱니바퀴, 각 톱니바퀴는 8개의 톱니를 가지고 있다.
//시계방향으로 돌리는 함수
void clockwise(int num){
    int tmp=map[num][7];//마지막 극 저장
    for(int i=6;i>=0;i--){
        map[num][i+1]=map[num][i];
    }
    map[num][0]=tmp;
}
//반시계 방향으로 돌리는 함수
void counterclockwise(int num){
    int tmp=map[num][0];//첫번째 극 저장
    for(int i=1;i<8;i++){
        map[num][i-1]=map[num][i];
    }
    map[num][7]=tmp;
}
int main(){
    for(int i=0;i<4;i++){
        string str;
        cin>>str;
        for(int k=0;k<str.size();k++){
            map[i][k]=str[k]-'0';
        }
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int num,dir;
        cin>>num>>dir; //톱니바퀴의 번호와 방향

        int state[3]={0,}; //맞닿는 부분의 상태를 나타내는 변수, 다른 극이면 1 같은 극이면 0
        //1,2 2,3 3,4
        if(map[0][2]!=map[1][6]){state[0]=1;}
        if(map[1][2]!=map[2][6]){state[1]=1;}
        if(map[2][2]!=map[3][6]){state[2]=1;}
        // 현재 돌 톱니바퀴부터 양쪽으로 뻗어나가며 만약 멈춰있으면 그대로 break;(이어서 다 멈춤), 만약 움직인다면 다음 톱니바퀴 상태어떤지 체크하고 시계로 돌림
        // 톱니바퀴를 돌린다.
        num-=1; //인덱스로 사용
        int tmp;
        if(dir==1){ //시계방향
            clockwise(num);//인자로 돌릴 톱니바퀴의 번호를 준다.
            dir=-1;
        }else{ //반시계방향
            counterclockwise(num);
            dir=1;
        }
        tmp=dir;
        //돌릴 톱니바퀴의 번호가 0번이면 state 0,1,2 
        //돌릴 톱니바퀴의 번호가 1번이면 state 0  1,2
        //돌릴 톱니바퀴의 번호가 2번이면 state 1,0  2
        //돌릴 톱니바퀴의 번호가 3번이면 2 1 0 
        for(int j=num-1;j>=0;j--){
            if(state[j]){ //만약 극이 다르면?
                if(dir==1){ //시계방향
                    clockwise(j);//인자로 돌릴 톱니바퀴의 번호를 준다.
                    dir=-1;
                }else{ //반시계방향
                    counterclockwise(j);
                    dir=1;
                }
            }else{//극이 다르면 
                break;
            }
        }
        for(int j=num+1;j<4;j++){
            if(state[j-1]){ //만약 극이 다르면?
                if(tmp==1){ //시계방향
                    clockwise(j);//인자로 돌릴 톱니바퀴의 번호를 준다.
                    tmp=-1;
                }else{ //반시계방향
                    counterclockwise(j);
                    tmp=1;
                }
            }else{//극이 다르면 
                break;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<4;i++){
        if(map[i][0]==1){ //s극
            cnt+=pow(2,i);
        }
    }
    cout<<cnt;
    return 0;
}