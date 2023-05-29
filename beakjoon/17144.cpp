#include <iostream>
#include <cstring>
using namespace std;
int r,c,t;
int map[51][51];
int after[51][51]; //1초 후의 map
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
void diffusion(int j,int k){
    int cnt=0;//어느쪽으로 몇번 확산됐는지?
    for(int i=0;i<4;i++){
        int nx = k+x[i];
        int ny = j+y[i];
        if(0<=nx && nx <c && 0<=ny && ny<r){ //칸이 없으면 그 방향으로는 확산이 x
            if(map[ny][nx]!=-1){ //공기청정기가 없다면,
                after[ny][nx]+=map[j][k]/5;
                cnt++;
            }
        }
    }
    after[j][k]-=(map[j][k]/5*cnt); //현재 위치에 남은 미세먼지 값
}
void airCleaner(int j,int k){
    //위쪽 공기청정기 바람
    for(int i=j-2;i>=0;i--){
        map[i+1][0]=map[i][0];
    }
    for(int i=1;i<c;i++){
        map[0][i-1]=map[0][i];
    }
    for(int i=0;i<j;i++){
        map[i][c-1]=map[i+1][c-1];
    }
    for(int i=c-2;i>=1;i--){
        map[j][i+1]=map[j][i];
    }
    map[j][k+1]=0; //공기청정기에서 나오는 바람은 0
    //아래쪽 공기청정기 바람
    for(int i=j+2;i<r-1;i++){
        map[i][0]=map[i+1][0];
    }
    for(int i=1;i<c;i++){
        map[r-1][i-1]=map[r-1][i];
    }
    for(int i=r-2;i>=j+1;i--){
        map[i+1][c-1]=map[i][c-1];
    }
    for(int i=c-2;i>=1;i--){
        map[j+1][i+1]=map[j+1][i];
    }
    map[j+1][k+1]=0; //공기청정기에서 나오는 바람은 0
}
int dustcount(){
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(map[i][j]!=-1){
                cnt+=map[i][j];
            }
        }
    }
    return cnt;
}
int main(){
    cin>>r>>c>>t;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>map[i][j];
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                if(map[j][k]){ //먼지가 있고, 아직 방문하지 않았다면?
                    diffusion(j,k); //확산이 일어난다.
                }
            }
        }
        for(int j=0;j<r;j++){ 
            for(int k=0;k<c;k++){
                map[j][k]+=after[j][k];
            }
        } 
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                after[j][k]=0;
            }
        } 
        
        //공기청정기 작동
        for(int j=0;j<r;j++){
            bool ex=false;
            for(int k=0;k<c;k++){
                if(map[j][k]==-1){
                    airCleaner(j,k); //공기청정기 위치 파악 후 인자로 넘겨준다.

                    ex=true;
                    break;
                }
            }
            if(ex){
                break;
            }
        }
    }
    cout<<dustcount();
    return 0;
}