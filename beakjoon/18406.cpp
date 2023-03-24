#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;

    int sum=0;
    int sum2=0;
    for(int i=0;i<str.size()/2;i++){
        sum+=str[i]-'0';
        sum2+=str[str.size()-1-i]-'0';
    }
    if(sum==sum2)cout<<"LUCKY";
    else cout<<"READY";
    return 0;
}