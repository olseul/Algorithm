function solution(X, Y) {
    let xcount = {};
    let ycount = {};
    let result = [];
    
    X.split('').forEach((val)=>{
        if(xcount[val] == undefined){
            xcount[val] = 1;
        }else{
            xcount[val] += 1;
        }
    })
    Y.split('').forEach((val)=>{
        if(ycount[val] == undefined){
            ycount[val] = 1;
        }else{
            ycount[val] += 1;
        }
    })
    
    for(let i = 0; i<=9; i++){
        if((xcount[i] == undefined) || (ycount[i] == undefined)){
            continue;
        }
        let num = xcount[i] > ycount[i] ? ycount[i] : xcount[i];
        for(let j=0; j<num; j++){
            result.push(i);
        }
        
    }
    
    if(result.length == 0){
        return "-1"
    }
    let sorted = result.sort((a,b) => b-a);
    if(sorted[0] == 0){
        return "0";
    }
    return sorted.join('');
}