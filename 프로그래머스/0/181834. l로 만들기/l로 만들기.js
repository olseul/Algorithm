function solution(myString) {
    return myString.split('').map(a => {
        if(a.charCodeAt(0) < 'l'.charCodeAt(0)){
            return 'l';
        }else{
            return a;
        }
    }).join('')
}