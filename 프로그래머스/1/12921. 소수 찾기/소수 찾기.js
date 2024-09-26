function solution(n) {
    let isPrime = new Array(n + 1).fill(true);
    isPrime[0] = isPrime[1] = false;

    for(let i = 2; i<= Math.sqrt(n); i++){
        if(isPrime[i]){
            for(let j = i*i; j<=n; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    let result = 0;
    for(let i = 2; i<= n; i++){
        if(isPrime[i]){
            result += 1;
        }
    }
    return result;
}