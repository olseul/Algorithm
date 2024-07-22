function solution(l, r)  {
    let answer = [];
    for(let i = l; i <= r; i++){
        let num = String(i);
        let exist = true;
        for(let j = 0; j < num.length; j++){
            if(num[j] !== "0" && num[j] !== "5"){
                exist = false;
                break;
            }
        }
        if(exist == true){
            answer.push(+num);
        }
    }
    return answer.length ? answer : [-1];
}