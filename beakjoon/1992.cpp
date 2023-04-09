#include <iostream>
#include <string>
using namespace std;
int map[64][64];
int n;
string s;
void solve(int x,int y,int size){
    for(int i=x;i<x+size;i++){
        for(int j=y;j<y+size;j++){
            if(map[i][j]!=map[x][y]){
                cout << "(";
				solve(x, y, size / 2);
				solve(x, y + size / 2, size / 2);
				solve(x + size / 2, y, size / 2);
				solve(x + size / 2, y + size / 2, size / 2);
				cout << ")";
				return;
            }
        }
    }cout<<map[x][y];
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            map[i][j]=s[j]-'0';
        }
    }
    solve(0,0,n);
    return 0;
}