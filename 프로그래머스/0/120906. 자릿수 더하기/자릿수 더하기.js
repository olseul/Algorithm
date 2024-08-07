function solution(n) {
    var answer = String(n);
    let result = 0;
    for(let i = 0; i < answer.length; i++){
        result += +answer[i];
    }
    return result;
}