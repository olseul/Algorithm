function solution(d, budget) {
    d.sort((a,b) => a-b);
    let sum = 0;
    let cnt = 0;
    for(let i = 0; i<d.length; i++){
        sum+= d[i];
        if(sum > budget){
            break;
        }
        cnt += 1;
    }
    return cnt
}