function solution(my_string, m, c) {
    let arr = [...my_string];
    let result = "";
    while(arr.length){
        result += arr[c-1];
        arr.splice(0, m);
    }
    return result;
}