#include<iostream>
using namespace std;
int main(){
    int num[20001]={0,};
    for(int i=1;i<=9999;i++){
        int sum=i;
        if(1<= i && i<=9){
            sum+=i;
        }
        else if(10<= i && i<=99){
            sum+= (i%10);
            sum+= (i/10);
        }
        else if(100<= i && i<=999){
            sum+= i/100; 
            sum+= (i%100)/10; 
            sum+= (i%100)%10; 
        }
        else if(1000<= i && i<=9999){
            sum+= i/1000; 
            sum+= (i%1000)/100; 
            sum+= (i%1000)%100/10; 
            sum+= (i%1000)%100%10; 
        }
        num[sum]=1;
    }
    for(int i=1;i<=9999;i++){
        if(!num[i]){
            cout<<i<<'\n';
        }
    }
    return 0;
}