#include <iostream>
using namespace std;
int main(){
    int e,f,c;
    cin>>e>>f>>c;
    int emt = e+f;//빈병의 개수
    int total =0;
    while(emt>=c){
        total += emt/c;
        emt = emt/c+emt%c;//빈병의 개수
    }
    cout<<total;
    return 0;
}