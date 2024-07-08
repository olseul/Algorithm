function solution(arr) {
    let idx = 0;
    while(true){
        let result = arr.map((el) => {
            if(el >= 50 && el % 2 == 0){
                return el / 2;
            }else if(el < 50 && el % 2 == 1){
                return el * 2 + 1;
            }
        }); 

        idx += 1;
        if(all_equal(arr, result)){
            return idx - 2;
        }
        arr = result;
    }
}

function all_equal(arr1, arr2){
    result = true;
    for(let idx in arr1){
        if(arr1[idx] !== arr2[idx]){
            result = false;
            break;
        }
    }
    return result;
}