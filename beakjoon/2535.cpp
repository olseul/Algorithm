#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<int, pair<int,int>>> v;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({c,{a,b}});
    }
    sort(v.begin(), v.end(), greater<pair<int, pair<int,int>>>());

    int na[101]={0,}; // 각 나라마다 메달 몇개 받았는지
    int cnt = 0; // 수여한 메달의 갯수
    for(int i=0;i<n;i++){
        if(na[v[i].second.first]<2){
            na[v[i].second.first]++; // 메달을 받는다.
            cout<<v[i].second.first<<' '<<v[i].second.second<<'\n';
            cnt++;
        }
        if(cnt==3){
            break;
        }
    }
    return 0;
}