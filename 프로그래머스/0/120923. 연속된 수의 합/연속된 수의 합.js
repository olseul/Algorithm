function sum(arr){
    return arr.reduce((acc, cur) => acc + cur, 0);
}

function solution(num, total) {
    let result = [];
    if(total == 0){
        result.push(0);
        for(let i = 0; i< Math.floor(num / 2); i++){
            result.push(i+1);
            result.unshift((i+1)*-1);
            console.log(result)
        }
        return result;
    }
    for(let i = (total * -1); i<= total; i++){
        result = [];
        for(let j = 0; j<num; j++){
            result.push(i+j);
        }
        if(sum(result) == total){
            break;
        }
    }
    return result;
}