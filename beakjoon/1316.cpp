#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    int cnt=0;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        int size['z'-'a'+1]={0,};
        bool tf = false;
        for(int j=0;j<str.size();j++){
            size[str[j]-'a']++;
            if(size[str[j]-'a']>=2 && str[j]!=str[j-1]){
                tf=true;
                break;
            }
        }
        if(tf==false) cnt++;
    }
    cout<<cnt;
    return 0;
}