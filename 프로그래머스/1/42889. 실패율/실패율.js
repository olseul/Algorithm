function solution(N, stages) {
    let dic = {};
    for(let i = 1; i<= N; i++){
        let deno = 0;
        let num = 0;
        for(let j = 0; j<stages.length; j++){
            if(stages[j] == i){
                num += 1;
            }else if(stages[j] >= i){
                deno += 1;
            }
        }
        dic[i] = num/deno;
    }
    let sorted = Object.entries(dic).sort(([,a], [,b]) =>(b - a));
    for(let i = 0; i < N; i++){
        sorted[i] = parseInt(sorted[i][0]);
    }
    return sorted;
}