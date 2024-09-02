function solution(my_string) {
    let arr = my_string.split(' ');
    let result = +arr[0];
    let char = 0;
    for(let i = 1; i< arr.length; i++){
        if(arr[i] == '+'){
            char = 1;
        }else if(arr[i] == '-'){
            char = -1;
        }else{
            result += +arr[i] * char;
        }
    }
    return result;
}