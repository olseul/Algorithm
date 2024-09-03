function c(num){
    let result = 1n;
    for(let i = 1n; i<=num; i++){
        result *= i;
    }
    return result;
}

function solution(balls, share) {
    return BigInt(c(balls)) / (BigInt(c(balls - share)) * BigInt(c(share)))
}