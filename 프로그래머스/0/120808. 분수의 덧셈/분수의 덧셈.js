function gcd(a, b){
    while(b !== 0){
        let tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

function lcm(a,b){
    return a*b / gcd(a,b);
}

function solution(numer1, denom1, numer2, denom2) {
    let denom = lcm(denom1, denom2);
    let numer = numer1 * denom / denom1 + numer2 * denom / denom2;
    
    let div = gcd(numer, denom);
    
    return [numer /div, denom/div]
}