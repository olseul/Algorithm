function solution(brown, yellow) {
    let total = brown + yellow;
    for(let h = 3; h <= Math.sqrt(total); h++){
        if(total % h == 0){
            let w = total / h;
            if((h - 2) * (w - 2) == yellow){
                return [w, h];
            }
        }
    }
}