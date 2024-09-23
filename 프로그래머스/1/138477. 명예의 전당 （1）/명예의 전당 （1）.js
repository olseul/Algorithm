function solution(k, score) {
    let honor = [];
    let result = [];
    k -= 1;
    for(let i = 0; i < score.length; i++){
        if(i <= k){
            honor.push(score[i]);
            honor.sort((a, b) => (b - a));
            result.push(Math.min(...honor));
        }else{
            if(score[i] > honor[k]){
                honor.pop();
                honor.push(score[i]);
                honor.sort((a, b) => (b - a));
            }
            result.push(Math.min(...honor));
        }
    }
    return result;
}