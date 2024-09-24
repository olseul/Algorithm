function solution(array) {
    let dic = {};
    for(let i = 0; i < array.length; i++){
        if(dic[array[i]] == undefined){
            dic[array[i]] = 1;
        }else{
            dic[array[i]] += 1;
        }
    }
    let max  = 0;
    let keynum;
    for(let key in dic){
        if(max < dic[key]){
            max = dic[key];
            keynum = key;
        }
    }
    
    for(let key in dic){
        if(max == dic[key] && key !== keynum){
            return -1;
        }    
    }
    return parseInt(keynum);
}