function solution(n) {
    let result = [];
    while(true){
        if(n == 1){
            break;
        }
        for(let i = 2; i<=n; i++){
            if(n % i == 0){
                result.push(i);
                n /= i;
                break;
            }
        }
    }
    return [...new Set(result)];
}