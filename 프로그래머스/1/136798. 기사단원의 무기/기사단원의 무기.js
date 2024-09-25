function divisor(num){
    let cnt = 0;
    for(let i = 1; i*i <= num; i++){
        if(num % i == 0){
            cnt += 1;
            if(i !== num / i){
                cnt += 1;
            }
        }
        
    }
    return cnt;
}

function solution(number, limit, power) {
    let result = 0;
    let add = 0;
    for(let i = 1; i<= number; i++){
        let num = divisor(i);
        if(num <= limit){
            result += num;
        }else{
            result += power;
        }
    }
    return result
}