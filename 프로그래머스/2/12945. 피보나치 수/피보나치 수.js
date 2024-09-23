function solution(n) {
    let fib = [0, 1];
    let mod = 1234567
    
    for(let i = 2; i<= n; i++){
        fib[i] = (fib[i-1] + fib[i-2]) % mod
    }
    return fib[n];
}