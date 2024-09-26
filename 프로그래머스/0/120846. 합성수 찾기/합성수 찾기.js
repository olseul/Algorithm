function measure(num){
    let cnt = 0;
    for(let i = 1; i <= Math.sqrt(num); i++){
        if(num % i == 0){
            cnt += 1;
            if(i !== num % i){
                cnt += 1;
            }
        }
    }
    return cnt;
}

function solution(n) {
    let result = 0;
    for(let i = 1; i<=n; i++){
        if(measure(i) >= 3){
            result += 1;
        }
    }
    return result;
}