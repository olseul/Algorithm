function isLowerCase(char){
    return char === char.toLowerCase() ? true : false;
}

function solution(my_string) {
    let result = "";
    for(let i = 0; i<my_string.length; i++){
        if(isLowerCase(my_string[i])){
            result += my_string[i].toUpperCase();
        }else{
            result += my_string[i].toLowerCase();
        }
    }
    
    return result;
}