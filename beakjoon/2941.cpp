#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int cnt = str.length();

    for(int i=0;i<str.size();i++){
        if(str[i]=='-'|| str[i]=='='){
            cnt--;
        }

        if(str[i]=='=' && str[i-1]=='z'){
            if(str[i-2]=='d'){
                cnt--;
            }
        }

        if(str[i]=='j'){
            if(str[i-1]=='l' || str[i-1]=='n'){
                cnt--;
            }
        }
    }
    cout<<cnt;
    return 0;
}