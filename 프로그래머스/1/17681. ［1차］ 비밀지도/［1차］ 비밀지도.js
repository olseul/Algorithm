function Binary(num, n){
    return num.toString(2).padStart(n, '0');
}

function solution(n, arr1, arr2) {
    for(let i in arr1){
        arr1[i] = Binary(arr1[i], n);
    }
    for(let i in arr2){
        arr2[i] = Binary(arr2[i], n);
    }
    
    let map = [];
    
    for(let i = 0; i < n; i++){
        let result = "";
        for(let j = 0; j < n; j++){
            if(arr1[i][j] == '1' || arr2[i][j] == '1'){
                result += '#';
            }else{
                result += ' ';
            }
        }
        map.push(result);
    }
    
    return map;
}