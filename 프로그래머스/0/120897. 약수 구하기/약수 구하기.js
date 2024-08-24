function solution(n) {
    let cnt = 1;
    let result = [];
    while(cnt <= n){
        if(n % cnt == 0){
            result.push(cnt);
        }
        cnt += 1;
    }
    return result;
}