#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    if(a[0]!=1){
        cout<<1;
        return 0;
    }
    int last = 1;
    for(int i=1;i<n;i++){
        if(last+1<a[i]){
            break;
        }
        last+=a[i];
    }
    cout<<last+1;
    return 0;
}