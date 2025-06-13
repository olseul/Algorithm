function solution(N, stages) {
    let arr = []; // 실패율
    for(let i=0; i<N; i++){
        arr.push(i+1);
    }
    
    let obj = {};
    
    stages.forEach(a=>{
        obj[a] = (obj[a] || 0) + 1;
    })
    
    let result = arr.map(a=>{
        let clear = 0;
        let noclear = 0;
        for(let [key, val] of Object.entries(obj)){
            if(+key > a){
                clear += val;
            }else if(+key == a){
                noclear += val;
            }
        }
        let fail = noclear/clear;
        return [a, fail];
    })
    let answer = result.sort((a,b) => b[1] - a[1]).map(a=>a[0]);
    return answer
    
    
}