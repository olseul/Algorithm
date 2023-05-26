#include <iostream>
using namespace std;

int visited[5][5]={0,}; //방문 여부
bool bingo(){
    
    int sum=0;

    //가로 빙고
    int cnt=0;
    for(int i=0;i<5;i++){
        int j;
        for(j=0;j<5;j++){
            if(!visited[i][j]){
                break;
            }
        }if(j==5){
            cnt++; 
        }
    }
    sum+=cnt;
    //세로 빙고
    cnt=0;
    for(int i=0;i<5;i++){
        int j;
        for(j=0;j<5;j++){
            if(!visited[j][i]){
                break;
            }
        }if(j==5){
            cnt++; 
        }
    }
    sum+=cnt;

    int i;
    for(i=0;i<5;i++){
        if(!visited[i][i]){
            break;
        }
    }
    if(i==5){
        sum+=1;
    }

    for(i=0;i<5;i++){
        if(!visited[i][4-i]){
            break;
        }
    }
    if(i==5){
        sum+=1;
    }

    if(sum>=3){
        return true;
    }
    return false;

}
int main(){

    int xy[26][2];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int num;
            cin>>num;
            xy[num][0]=i;
            xy[num][1]=j;
        }
    }

    int cnt=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int num;
            cin>>num;
            int x=xy[num][0];
            int y=xy[num][1];

            visited[x][y]=1; //방문 표시
            cnt++;

            //빙고 3줄 맞는지 확인하rh
            if(bingo()){
                cout<<cnt;
                return 0;
            }
        }
    }
    return 0;
}