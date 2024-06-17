function solution(a, b) {
    let str = String(a)+String(b);
    let num = 2*a*b;
    return +str > num ? +str : num;
}