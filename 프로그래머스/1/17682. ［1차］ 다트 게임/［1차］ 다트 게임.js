function solution(dartResult) {
    let str = ['S', 'T', 'D'];
    let arr = dartResult.split('');
    let tmp = "";
    let result = [];
    for(let i=0; i<arr.length; i++){
        let n = arr[i];
        if(!str.includes(n)){
            tmp += n;
        }else{
            tmp += n;
            let next = arr[i + 1];
            if(next == '*' || next == '#'){
                tmp += next;
                i+=1;
            }
            result.push(tmp);
            tmp = ""
        }
    }
    if(tmp !== "") result.push(tmp);
    const obj = {
        'S' : (x) => x**1,
        'D' : (x) => x**2,
        'T' : (x) => x**3,
    }
    let scores = [];
    result.forEach((a,idx)=>{
        let arr = a.split('');
        let tmp = "";
        let answer = [];
        for(let i=0; i<arr.length; i++){
            if(!isNaN(arr[i])){
                tmp += arr[i]
            }else{
                if(arr[i] == 'S' || arr[i] == 'D' || arr[i] == 'T'){
                    answer.push(+tmp);
                    answer.push(arr[i]);
                    tmp = "";
                }else{
                    answer.push(arr[i])
                    tmp = ""
                }
            }
        }
        let bonus = answer[1];
        let score = answer[0];
        
        let num = obj[bonus](score);
        if(answer[2] == '*'){
            if(idx-1 >= 0){
                scores[idx-1] *= 2;
            }
            num *= 2;
        }else if(answer[2] == '#'){
            num *= -1;
        }
        scores.push(num)
    })
    return scores.reduce((acc, cur)=>{
        return acc + cur;
    }, 0)
}