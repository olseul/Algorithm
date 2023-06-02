#include <iostream>
#include <queue>
using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int n,m;
int map[100][100];
int bfs(int i,int j){
    int visited[100][100]={0,};
    queue <pair<int,int>> q;
    q.push({i,j});
    visited[i][j]=1;
    bool ex=false;

    while(!q.empty()){
        int x=q.front().second;
        int y=q.front().first;

        q.pop();

        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(visited[ny][nx] || nx >=m || nx <0 || ny >=n || ny <0 ){
                continue;
            }
            if(map[ny][nx]==1){
                map[ny][nx]=2;
                visited[ny][nx]=1;
                ex=true;
            }
            else if(map[ny][nx]==0){
                q.push({ny,nx});
                visited[ny][nx]=1;
            }
        }
    }
    if(ex){
        return 1;
    }else{
        return -1;
    }

}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
        }
    }
    int cnt=0;
    int last=0;
    while(1){
        if(bfs(0,0)==1){
            last=0;
            cnt++;
        }
        else{
            break;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(map[i][j]==2){
                    map[i][j]=0;
                    last++;
                }
            }
        }
    }
    cout<<cnt<<'\n'<<last;
    return 0;
}