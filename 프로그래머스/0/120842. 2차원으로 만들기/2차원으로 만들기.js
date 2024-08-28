function solution(num_list, n) {
    var answer = [];
    let cnt = 0;
    let arr = [];
    for(let i = 0; i<num_list.length; i++){
        arr.push(num_list[i]);
        cnt += 1;
        if(cnt == n){
            answer.push(arr);
            arr = [];
            cnt = 0;
        }
    }
    return answer;
}