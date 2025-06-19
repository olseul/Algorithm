function solution(msg) {
    let map = new Map();

    for (let i = 65; i <= 90; i++) {
        map.set(String.fromCharCode(i), i-64);
    } 
    let nextIndex = 27;
    let result = [];
    let arr = msg.split('');
    for(let i=0; i<arr.length; i++){
        let Yes = false;
        for(let j=arr.length - 1; j>=i; j--){
            let ex = arr.slice(i, j+1).join('');
            if(map.get(ex) !== undefined){
                result.push(map.get(ex));
                // 수정된 부분!
                if (j + 1 < arr.length) {
                    map.set(ex + arr[j + 1], map.size +1);
                }

                i+=ex.length - 1;
                break;
            }
        }
    }
    return result;
    
}