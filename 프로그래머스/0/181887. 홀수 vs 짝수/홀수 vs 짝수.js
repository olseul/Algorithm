function solution(num_list) {
    let a = num_list.reduce((acc, cur, idx)=>{
        if(idx%2){
             acc = acc + cur;
        }
        return acc;
    }, 0)
    
    let b = num_list.reduce((acc, cur, idx)=>{
        if(!(idx%2)){
             acc = acc + cur;
        }
        return acc;
    }, 0)
    return Math.max(a,b);
}