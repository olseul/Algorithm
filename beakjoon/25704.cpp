#include <iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    if(n>=20){
        p-=(p*25/100>2000?p*25/100:2000);
    }
    else if(n>=15){
        p-=(p*10/100>2000?p*10/100:2000);
    }
    else if(n>=10){
        p-=(p*10/100>500?p*10/100:500);
    }
    else if(n>=5){
        p-=500;
    }
    if(p<0){
        cout<<0;
    }
    else{
        cout<<p;
    }
    return 0;
}