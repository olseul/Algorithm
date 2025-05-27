function solution(arr, query) {
    query.forEach((num,idx)=>{
        if(idx%2){ // 홀수
            arr.splice(0, num);
        }else{ // 짝수
            arr.splice(num+1);
        }
    })
    return arr;
}