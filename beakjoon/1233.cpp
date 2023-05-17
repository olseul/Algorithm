#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector <int> v(a+b+c,0);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                v[i+j+k]++;
            }
        }
    }
    int max=0;
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    cout<<max;
    return 0;
}