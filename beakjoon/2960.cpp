#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[1001];
    for(int i=0;i<n-1;i++){
        arr[i]=2+i;
    }
    int cnt=0;
    int tmp;
    while(1){
        for(int i=0;i<n-1;i++){
            if(arr[i]!=0){
                tmp = arr[i];
                cnt++;
                if(cnt==k){
                    cout<<arr[i];
                    return 0;
                }
                arr[i]=0;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]!=0 && arr[i]%tmp==0){
                cnt++;
                if(cnt==k){
                    cout<<arr[i];
                    return 0;
                }
                arr[i]=0;
            }
        }
    }
    
    return 0;
}