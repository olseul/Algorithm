#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    int num[10]={0,};
    for(int i=0;i<str.size();i++){
        num[str[i]-'0']++;
    }
    while(num[9]-num[6]>1 || num[9]-num[6]<-1){
        if(num[9]-num[6]>0){
            num[9]--;
            num[6]++;
        }
        else {
            num[9]++;
            num[6]--;
        }
    }
    
    int max=0;
    for(int i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    cout<<max;
    return 0;
}