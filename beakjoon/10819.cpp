#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cal_dif(vector <int> &arr){
    int sum=0;
    for(int i=1;i<arr.size();i++){
        sum+=abs(arr[i]-arr[i-1]);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    
    vector <int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int difmax = 0;
    do{
        int curdif = cal_dif(arr);
        difmax=max(curdif, difmax);
    }while(next_permutation(arr.begin(), arr.end()));

    cout<<difmax;

    return 0;
}