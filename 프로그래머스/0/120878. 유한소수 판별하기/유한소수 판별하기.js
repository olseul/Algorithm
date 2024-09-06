let getGCD = (num1, num2) => {
    let gcd = 1;

    for(let i=2; i<=Math.min(num1, num2); i++){
        if(num1 % i === 0 && num2 % i === 0){
            gcd = i;
        }
    }

    return gcd;
}

function solution(a, b) {
    let num = getGCD(a, b);
    a /= num;
    b /= num;
   
    // 2와 5 외의 소인수가 있는지 체크
    while(b % 2 === 0) b /= 2;
    while(b % 5 === 0) b /= 5;

    // 남은 b가 1이면 2와 5로만 이루어져 있음
    return b === 1 ? 1 : 2;
}