function solution(arr, k) {
    if(k%2 == 0){
        return arr.map(a=>a+k);
    }else{
        return arr.map(a=>a*k);
    }
}