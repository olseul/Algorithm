#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector <int> v[1001];
bool visit[1001]; // 방문했는지
int bfs(){
    queue <int> q;
    q.push(1);
    visit[1]=true;
    int cnt=0;

    while(!q.empty()){
        int qp=q.front();
        q.pop();
        for(int i=0;i<v[qp].size();i++){
            int nt = v[qp][i];
            if(!visit[nt]){ // 방문하지 않았다면?
                q.push(nt); 
                visit[nt]=1;// 방문했다고 표시
                cnt++; // 비행기를 탔다
            }
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        for(int j=0;j<m;j++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int cnt=bfs();
        cout<<cnt<<'\n';

        for (int i = 0; i <= n; ++i){
            v[i].clear();
        }
        memset(visit, false, sizeof(visit));
    }
    return 0;
}