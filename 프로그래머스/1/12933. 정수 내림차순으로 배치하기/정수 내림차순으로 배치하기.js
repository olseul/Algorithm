function solution(n) {
    return BigInt(n.toString().split('').sort((a,b)=> +b - +a).join(''));
}