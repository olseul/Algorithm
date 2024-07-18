function solution(arr) {
    let rowNum = arr[0].length;
    let columnNum = arr.length;
    
    if(rowNum < columnNum){
        let dif = columnNum - rowNum;
        for(let i = 0; i < columnNum; i++){
            for(let j = 0; j < dif; j++){
                arr[i].push(0);
            }
        }
    }
    else if(rowNum > columnNum){
        let dif = rowNum - columnNum;
        let add = [];
        for(let i = 0; i < rowNum; i++){
            add.push(0);
        }
        for(let j = 0; j < dif; j++){
            arr.push(add);
        }
    }
    
    return arr;
}