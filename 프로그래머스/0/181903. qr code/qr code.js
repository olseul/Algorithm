function solution(q, r, code) {
    result = "";
    for(let idx in code){
        if(idx % q == r){
            result += code[idx];
        }
    }
    return result;
}