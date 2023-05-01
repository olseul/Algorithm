#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        string str;
        cin>>str;
        int cnt=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                cnt++;
            }
            else{
                cnt--;
                if(cnt<0){
                    cout<<"NO"<<'\n';
                    break;
                }
            }
        }
        if(!cnt){
            cout<<"YES"<<'\n';
        }
        else if(cnt>0){
            cout<<"NO"<<'\n';
        }
        t--;
    }
    return 0;
}