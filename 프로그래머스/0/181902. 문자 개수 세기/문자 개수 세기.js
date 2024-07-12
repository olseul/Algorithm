function isUpperCase(str){
    return str === str.toUpperCase();
}


function solution(my_string) {
    let result = new Array(52).fill(0);
    for(let element of my_string){
        if(isUpperCase(element)){
            result[element.charCodeAt() - 65] += 1;
        }else{
            result[element.charCodeAt() - 71] += 1;
        }
    }
    return result;
}