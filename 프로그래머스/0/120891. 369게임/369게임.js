function solution(order) {
    let str = String(order);
    let cnt = 0;
    for(let i = 0; i < str.length; i++){
        if(str[i] == 3 || str[i] == 6 || str[i] == 9){
            cnt+=1;
        }
    }
    return cnt;
}