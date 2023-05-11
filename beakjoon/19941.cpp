#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    
    string str;
    cin>>str;

    vector <int> h(n); // 먹은 햄버거인지 확인한다. 0으로 자동초기화 한다.
    int cnt=0;
    for(int i=0;i<n;i++){
        if(str[i]=='P'){ // 만약 사람이라면
            bool eat=false;
            for(int j=k;j>=1;j--){ // 왼쪽부터 k만큼 차례대로 확인한다.
                if(i-j >= 0 && str[i-j]=='H' && !h[i-j]){ //만약 햄버거가 있고, 아직 안먹은 햄버거라면?
                    h[i-j]=1; // 햄버거를 먹는다.
                    eat=true; //햄버거를 먹었다는 것을 표시
                    cnt++;
                    break; // 먹었으면 더 이상 확인하지 않는다.
                }
            }
            if(!eat){ //만약 햄버거를 먹지 못했다면
                for(int j=1;j<=k;j++){ // 오른쪽부터 k만큼 차례대로 확인한다.
                    if(i+j < n && str[i+j]=='H' && !h[i+j]){
                        h[i+j]=1;
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}
