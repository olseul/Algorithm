function solution(binomial) {
    const [a,b,c] = binomial.split(' ');
    
    let result;
    
    switch(b){
        case '+':
            result = +a + +c;
            break;
        case '-':
            result = a-c;
            break;
        case '*':
            result = a*c;
            break;
    }
    return result;
}