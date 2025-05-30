function solution(s) {
    let lastidx = {};
    let result = [];
    
    s.split('').forEach((val, idx)=>{
        if(lastidx[val] == undefined){
            result.push(-1);
            lastidx[val] = idx;
        }else{
            result.push(idx - lastidx[val]);
            lastidx[val] = idx;
        }
    })
    return result;
}