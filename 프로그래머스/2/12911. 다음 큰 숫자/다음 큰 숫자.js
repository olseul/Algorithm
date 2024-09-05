function binary_one_cnt(n){
    return n.toString(2).split('1').length - 1;
}

function solution(n) {
   let num = binary_one_cnt(n);
    while(true){
        n+=1;
        if(binary_one_cnt(n) == num){
            return n;
        }
    }
}