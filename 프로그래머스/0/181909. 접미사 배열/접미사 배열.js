function solution(my_string) {
    let arr = [...my_string];
    let result = [my_string];
    for(let i = 0; i<my_string.length-1; i++){
        arr.shift();
        result.push(arr.join(''));
    }
    return result.sort();
}