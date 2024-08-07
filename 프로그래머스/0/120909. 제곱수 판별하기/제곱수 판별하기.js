function solution(n) {
    let sqrt = n ** (1/2);
    if(sqrt % 1 == 0){
        return 1;
    }else{
        return 2;
    }
}