function solution(my_str, n) {
    let result = [];
    while(true){
        if(my_str.length < n){
            if(my_str != ""){
                result.push(my_str);   
            }
            break;
        }
        result.push(my_str.slice(0, n));
        my_str = my_str.slice(n);
        console.log(my_str)
    }
    return result;
}