function solution(arr, queries) {
    let answer = [];
    for(let i =0; i< queries.length; i++){
        let s = queries[i][0];
        let e = queries[i][1];
        let k = queries[i][2];
        let min = Math.max(...arr) + 1;
        let change = false;
        for(let j = s; j<= e; j++){
            if(k < arr[j] && min > arr[j]){
                min = arr[j];
                change = true;
            }
        }
        if(change == false){
            answer.push(-1);
        }else{ answer.push(min)}

    }
    return answer;
}