#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    int mode[8001]={0,};
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a>=0){
            mode[a]++;
        }else{
            mode[a*-1 + 4000]++;
        }
        sum+=a;
    }
    sort(v.begin(), v.end());

    cout<<int(round(double(sum)/v.size()))<<'\n';
    cout<<v[v.size()/2]<<'\n';

    int max=mode[0];
    int indexmax = 0;
    for(int i=1;i<8001;i++){
        if(max < mode[i]){
            max = mode[i];
            indexmax = i;
        }
    }
    
    vector <int> d;
    for(int i=0;i<8001;i++){
        if(max==mode[i]){
            if(i>4000){
                d.push_back((i-4000)*-1);
            }
            else{
                d.push_back(i);
            }
        }
    }
    if(d.size()!=1){
        sort(d.begin(),d.end());
        cout<<d[1]<<'\n';
    }else{
        cout<<d[0]<<'\n';
    }

    cout<<v[v.size()-1]-v[0];
    
    return 0;
}