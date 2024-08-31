function solution(n) {
    let cnt = 1;
    let num = 1;
    while(true){
        cnt *= num;
        if(cnt == n) break;
        if(cnt > n) {
            num-=1;
            break;
        }
        num += 1;
    }
    return num;
}