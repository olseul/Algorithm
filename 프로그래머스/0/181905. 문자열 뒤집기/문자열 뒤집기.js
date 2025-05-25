function solution(my_string, s, e) {
    let arr = my_string.split('');
    let reversed = arr.slice(s,e+1).reverse();
    arr.splice(s, e-s+1, ...reversed);
    
    return arr.join('');
}