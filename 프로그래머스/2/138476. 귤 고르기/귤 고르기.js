function solution(k, tangerine) {
    let dic = {};
    for(let i of tangerine){
        if(dic[i] == undefined){
            dic[i] = 1;
        }else{
            dic[i] += 1;
        }
    }
    let sorted = Object.entries(dic).sort(([, a], [, b]) => b - a);
    
    let cnt = 0;
    for (let i = 0; i < sorted.length; i++) {
        k -= sorted[i][1]; // k에서 해당 귤의 개수를 빼기
        cnt += 1; // 종류 하나 추가
        if (k <= 0) break; // k가 0 이하가 되면 루프 종료
    }
    return cnt;
}