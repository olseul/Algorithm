function solution(before, after) {
    let arr = before.split('');
    for(let i = 0; i < after.length; i++){
        if(arr.includes(after[i])){
            arr.splice(arr.indexOf(after[i]), 1);
        }else{
            break;
        }
    }
    return arr.length == 0 ? 1 : 0;
}