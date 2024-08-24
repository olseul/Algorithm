function solution(num, k) {
    let result = num.toString().indexOf(k);
    return result !== -1 ? result +1 : -1;
}