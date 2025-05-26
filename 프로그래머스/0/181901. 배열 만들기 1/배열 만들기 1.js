function solution(n, k) {
    let result = [];
    let num = k;
    while(n>=k){
        result.push(k);
        k+=num;
    }
    return result;
}