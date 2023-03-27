#include <iostream>
#include <queue>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        queue <pair<int,int>> q;
        priority_queue <int> pq;
        for(int j=0;j<n;j++){
            int ipt;
            cin>>ipt;
            pq.push(ipt);
            q.push({ipt, j});
        }
        int cnt=0;
        while(!q.empty()){
            int value = q.front().first;
            int idx = q.front().second;
            q.pop();
            if(value == pq.top()){
                pq.pop();
                cnt++;
                if(idx==m){
                    cout<<cnt<<'\n';
                    break;
                }
            }
            else{
                q.push({value, idx});
            }
        }
        
    }
    return 0;
}