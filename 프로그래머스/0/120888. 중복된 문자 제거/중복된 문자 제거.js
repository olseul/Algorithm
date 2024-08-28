function solution(my_string) {
    let du = [];
    let result="";
    for(let i = 0; i< my_string.length; i++){
        if(!du.includes(my_string[i])){
            du.push(my_string[i]);
            result += my_string[i];
        }
    }
    return result;
}