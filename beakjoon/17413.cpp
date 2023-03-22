#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    stack<char> s;
    bool tag = false;
    for(int i=0;i<str.size();i++){
        if(str[i]=='<'){
            if(!s.empty()){
                while(!s.empty()){
                    cout<<s.top();
                    s.pop();
                }
            }
            tag = true; //태그를 만남
            cout<<str[i];
        }
        else if(str[i]=='>'){
            tag = false;
            cout<<str[i];
        }
        else if(tag == true && str[i]!=' '){
            cout<<str[i];
        }
        else if(tag == false && str[i]!=' '){
            s.push(str[i]);
        }
        if(str[i]==' ' || i==str.size()-1){
            while(!s.empty()){
                cout<<s.top();
                s.pop();
            }
            if(str[i]==' '){
                cout<<' ';
            }
        }
    }
    return 0;
}