// 최대 공약수 (GCD) 함수
function gcd(a, b) {
    while (b !== 0) {
        let temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소 공배수 (LCM) 함수
function lcm(a, b) {
    return (a * b) / gcd(a, b);
}

function solution(arr) {
    let num = arr[0];
    for(let i = 1; i<arr.length; i++){
        num = lcm(num, arr[i]);
    }
    return num;
}