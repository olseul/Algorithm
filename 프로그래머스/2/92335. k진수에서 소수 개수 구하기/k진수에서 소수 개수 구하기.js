function isPrime(num){
    if (num === 1) return false;
    if(num === 2){
        return true;
    }
    
    for(let i=2; i<=Math.sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

function solution(n, k) {
    let str = n.toString(k)
    
    return str.split('0').filter(a=>isPrime(+a) && a!=="").length;
}