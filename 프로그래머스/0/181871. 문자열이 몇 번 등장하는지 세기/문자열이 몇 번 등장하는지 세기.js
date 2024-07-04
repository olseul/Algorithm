function solution(myString, pat) {
    let idx = 0;
    let cnt = 0;
    while(true){
        idx = myString.indexOf(pat, idx);
        console.log(idx)
        if(idx == -1){
            return cnt;
        }else{
            cnt += 1;
            idx += 1;
        }
        
    }
    return cnt;
}