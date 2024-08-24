function solution(n) {
    let cnt = 1;
    let result = 0;
    while(cnt <= n){
        if(n % cnt == 0){
            result += 1;
        }
        cnt += 1;
    }
    return result;
}