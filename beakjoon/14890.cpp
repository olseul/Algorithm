#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;

    vector <int> map[2*n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            map[i].push_back(num); 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            map[n+i].push_back(map[j][i]);
        }
    }
    int cnt=0;
    for(int i=0;i<2*n;i++){
        vector <int> visited(n);
        bool wayexist=true;
        for(int j=1;j<n;j++){
            if(abs(map[i][j]-map[i][j-1])>1){
                wayexist=false;
                break;
            }
            if(map[i][j]==map[i][j-1]+1){
                bool slope=true;
                for(int k=1;k<=l;k++){
                    if(((map[i][j]-1) != (map[i][j-k])) || (j-k < 0) || visited[j-k]){
                        slope=false;
                        break;
                    }
                }
                if(!slope){
                    wayexist=false;
                    break; //다음 라인으로 넘어간다.
                }
                for(int k=1;k<=l;k++){
                    visited[j-k]=1;
                }
            }
            else if(map[i][j]==map[i][j-1]-1){
                bool slope=true;
                for(int k=0;k<l;k++){
                    if((map[i][j] != map[i][j+k]) || (j+k >= n) || visited[j+k]){
                        slope=false;
                        break;
                    }
                }
                if(!slope){
                    wayexist=false;
                    break; //다음 라인으로 넘어간다.
                }
                for(int k=0;k<l;k++){
                    visited[j+k]=1;
                }
            }
        }
        if(wayexist){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}