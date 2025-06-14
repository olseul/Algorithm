function solution(brown, yellow) {
    let n = brown + yellow;
    let answer = [];
    
    for(let i = 1; i <= n; i++){
        if(n % i === 0){
            answer.push(i)
        }
    }
    
    
    let arr = [];
    for(let i=0; i<Math.floor(answer.length/2); i++){
        arr.push([answer[answer.length-1-i], answer[i]])
    }
    if(answer.length%2){
        arr.push([answer[Math.floor(answer.length/2)], answer[Math.floor(answer.length/2)]])
    }
    
    let result = arr.filter(a=> yellow == (a[0] - 2) * (a[1] - 2));
    return result[0]
}