#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coin5 = n/5; //일단 5원짜리 동전으로 최대한 써보기
    int remain = (n-coin5*5)%2; //나머지 금액을 2원으로 나눴을 때 남은 나머지
    while(remain){ //만약 나머지가 있다면?
        if(coin5==0){ //더 이상 쓸 5원이 없다면?
            cout<<-1;
            return 0;
        }
        coin5-=1;//5원짜리 동전 한개 줄임
        remain = (n-coin5*5)%2; //동전 하나 빼고 2원짜리 동전으로 나눠준다.
    }
    cout<<coin5 + (n-coin5*5)/2;
    return 0;
}