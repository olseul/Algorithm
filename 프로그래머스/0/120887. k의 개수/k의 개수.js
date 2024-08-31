function solution(i, j, k) {
    let cnt = 0;
    for(let b = i; b <= j; b++){ 
        let num = String(b);
        for(let a = 0; a < num.length; a++){
            if(num[a] == String(k)){
                cnt += 1;
            }
        }
    }
    
    return cnt;
}