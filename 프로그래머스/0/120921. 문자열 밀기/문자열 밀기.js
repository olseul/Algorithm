function solution(A, B) {
    if(A==B){return 0;}
    let result = -1;
    let str = A;
    for(let i = 1; i<=A.length; i++){
        str = str.slice(-1) + str.slice(0, -1);
        if(str == B){
            return i;
        }
    }
    
    return result;
}