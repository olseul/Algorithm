#include <iostream>
using namespace std;
int main(){
    char map[8][8];
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>map[i][j];
            // i가 0,2,4,6일 때 하얀 칸은 j가 짝수일 때다.
            if(i%2==0 && j%2==0 && map[i][j]=='F'){
                cnt++;
            }
            //i가 1,3,5,7일 때 하얀 칸은 j가 홀수일 때다.
            else if(i%2==1 && j%2==1 && map[i][j]=='F'){
                cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}