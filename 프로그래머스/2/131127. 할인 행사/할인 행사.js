function solution(want, number, discount) {
    let dic = {};
    let result = 0;
    for(let i = 0; i<=discount.length-10; i++){ // 시작 지점
        dic = {};
        for(let j = 0; j < 10; j++){
            if(dic[discount[i+j]] == undefined){
                dic[discount[i+j]] = 1;
            }else{
                dic[discount[i+j]] += 1;
            }
        }
        let po = true;
        for(let j in want){
            if(dic[want[j]] != number[j]){
                po = false;
                break;
            }
        }
        if(po == true){
            result += 1;
        }
    }
    return result;
}