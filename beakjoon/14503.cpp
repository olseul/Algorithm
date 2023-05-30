#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int r,c,d;
    cin>>r>>c>>d;
    int map[51][51];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
        }
    }
    int cnt=0;
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};
    //북0 동1 남2 서3
    queue <pair<int,int>> q;
    q.push({r,c});
    while(!q.empty()){
        int y=q.front().first;
        int x=q.front().second;
        q.pop();
        if(!map[y][x]){ //아직 청소되지 않은 경우,
            map[y][x]=2; //청소한다.
            cnt++;
        }
        bool cleaned = false;
        for(int i=0;i<4;i++){ //청소되지 않은 빈칸 찾기
            if(!d) {d=3;} //반시계 방향으로 돌고 앞으로 한 칸
            else{
                d-=1;
            }
            int nx=x+dx[d];
            int ny=y+dy[d];
            if(0>nx || nx>=m || 0>ny || ny>=n || map[ny][nx]){ // 만약 벽을 만난 경우?
                continue;
            }
            if(!map[ny][nx]){ // 청소되지 않은 빈칸이라면?
                q.push({ny,nx});
                cleaned = true;
                break;
            }
        }
        //청소되지 않은 빈 칸이 없는 경우
        if(!cleaned){
            int nx=x-dx[d]; //앞칸으로 이동하고 뒤로 두칸(뒤로 후진이라)
            int ny=y-dy[d];
            if(0>nx || nx>=m || 0>ny || ny>=n || map[ny][nx] == 1){ //후진할 수 없다면 작동을 멈춘다.
                break;
            }
            q.push({ny,nx}); //한 칸 후진
        }
    }
    cout<<cnt; 
    return 0;
}
