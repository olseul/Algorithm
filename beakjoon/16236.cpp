#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int map[20][20];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int visited[20][20];
int sharksize=2; //처음 아기상어의 크기는 2이다.
int sx, sy; //아기상어 위치

int distance(int tx, int ty){ //물고기까지 거리를 계산하는 함수
    queue <pair<pair<int,int>,int>> q;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }

    q.push({{sx,sy},0});
    visited[sx][sy]=1;
    while(!q.empty()){
        int x=q.front().first.first; //현재 위치 x
        int y=q.front().first.second;//현재 위치 y
        int cnt=q.front().second;//cnt

        q.pop();

        if(x == tx && y == ty) return cnt; //목표 물고기까지 도달했을 때

        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            // 맵의 경계 확인
            if(nx<0 || ny<0 || nx>=n || ny>=n) continue;

            // 이미 방문했거나, 자신보다 큰 물고기가 있는 경우 건너뜀
            if(visited[nx][ny] || map[nx][ny]>sharksize) continue;
            visited[nx][ny]=1;
            q.push({{nx,ny},cnt+1});
        }
    }
    return -1; // 물고기에 도달할 수 없는 경우 -1 반환
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
            if(map[i][j]==9){ //아기상어 위치 저장
                sx=i;
                sy=j;
                map[i][j] = 0;
            }
        }
    }
    int sec=0;//걸리는 초
    int eat=0;//현재까지 먹은 물고기의 수

    while(1){
        vector <pair<int,pair<int,int>>> v; //먹을 수 있는 물고기 위치와 아기상어까지 거리
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[i][j]!=0 && map[i][j]<sharksize){ //먹을 수 있는 물고기인지?
                    int dis=distance(i,j);
                    if(dis!=-1){
                        v.push_back({dis,{i,j}}); //먹을 수 있는 물고기의 위치, 그리고 최단경로
                    }
                }
            }
        }
        if(v.empty()){ //더 이상 먹을 수 있는 물고기가 없으면
            break;
        }
        else{
            sort(v.begin(), v.end()); //정렬
            int fx = v[0].second.first;
            int fy = v[0].second.second;
            map[fx][fy]=0; //물고기를 먹음
            sx=fx; sy=fy; //아기상어 위치 업데이트
            sec+=v[0].first;
            eat++;
            if(eat==sharksize){
                sharksize++;
                eat=0; //아기 상어 크기 증가시키고 먹은 물고기 수 초기화
            }
        }
    }
    cout<<sec;
    return 0;
}
