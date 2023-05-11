#include <iostream>
#include <deque>
using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k,m;
    cin>>n>>k>>m;

    deque <int> q;

    for(int i=1;i<=n;i++){
        q.push_back(i);
    }

    int cnt=0;
    bool back=false;
    while(!q.empty()){
        if(!back){
            for(int i=0;i<k-1;i++){
                q.push_back(q.front());
                q.pop_front();
            }
            cout<<q.front()<<'\n';
            q.pop_front();
            cnt++;
        }
        else{
            for(int i=0;i<k-1;i++){
                q.push_front(q.back());
                q.pop_back();
            }
            cout<<q.back()<<'\n';
            q.pop_back();
            cnt++;
        }

        if(cnt==m){
            back=!back;
            cnt=0;
        }
    }
    return 0;
}