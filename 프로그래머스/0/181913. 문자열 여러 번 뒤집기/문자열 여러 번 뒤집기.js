function solution(my_string, queries) {
    let arr = my_string.split("");
    let result = [];
    
    for(let i = 0; i < queries.length; i++){
        let s = queries[i][0];
        let e = queries[i][1];
        result = [];

        for(let j = 0; j < s; j++){
            result.push(arr[j])
        }
        for(let j = e; j >= s; j--){
            result.push(arr[j])
        }
        for(let j = e + 1; j < arr.length; j++){
            result.push(arr[j])
        }
        arr = result.slice(0);
        
    
    }
    return result.join("");
}