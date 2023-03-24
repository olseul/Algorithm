#include <iostream>
#include <string>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    char map[101][101];
    int cld[101][101];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>map[i][j];
        }
    }

    for(int i=0;i<h;i++){
        int total=-1;
        bool ex = false;
        for(int j=0;j<w;j++){
            if(map[i][j]=='c'){
                total=0;
                cld[i][j]=total;
                ex = true;
                total++;
            }else{
                cld[i][j]=total;
                if(ex==true){total++;};
            }
            
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<cld[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}