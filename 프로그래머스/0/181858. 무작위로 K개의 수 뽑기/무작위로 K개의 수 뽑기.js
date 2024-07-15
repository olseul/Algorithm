function solution(arr, k) {
    let answer = [];
    for(let i = 0; i<arr.length; i++){
        if(answer.includes(arr[i])){
            continue;
        }
        if(answer.length == k){
            break;
        }
        answer.push(arr[i]);
    }
    
    if(answer.length < k){
        let len = k-answer.length
        for(let i = 0; i < len; i++){
            answer.push(-1);
        }
    }
    
    return answer;
}