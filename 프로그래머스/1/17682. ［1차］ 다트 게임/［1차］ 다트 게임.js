function solution(dartResult) {
    let result = [];
    let dic = {
        'S' : 1,
        'D' : 2,
        'T' : 3,
    }
    for(let i = 0; i<dartResult.length; i++){
        if(isNaN(dartResult[i])){
            if(dartResult[i] == '*'){
                let num1 = result.pop();
                if(result.length != 0){
                    let num2 = result.pop();
                    result.push(num2 * 2);
                }
                result.push(num1 * 2);
            }else if(dartResult[i] == '#'){
                let num = result.pop();
                result.push(num * -1);
            }else{
                let num = result.pop();
                result.push(Math.pow(num, dic[dartResult[i]]));
            }
        }else{
            if(!isNaN(dartResult[i+1])){
                result.push(10);
                i+=1;
            }else{
                result.push(parseInt(dartResult[i]));
            }
        }
    }
    return result.reduce((acc, cur)=> acc + cur, 0);
}