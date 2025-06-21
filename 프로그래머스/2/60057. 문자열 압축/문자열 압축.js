function solution(s) {
    let result = [];
    for(let j=1; j<=s.length; j++){
        let stack = [];
        let sum = 0;
        for(let i=0; i<s.length; i+=j){
            let tmp = s.slice(i, i+j);
            if(i==0){
                stack.push(tmp);
                continue;
            }
            if(tmp == stack[stack.length - 1]){
                stack.push(tmp);
            }else{
                sum += (stack.length > 1 ? String(stack.length).length : 0) + stack[0].length;

                stack = [];
                stack.push(tmp);
            }
        }
        if (stack.length > 0) {
            sum += (stack.length > 1 ? String(stack.length).length : 0) + stack[0].length;

        }
        result.push(sum)
    }
    return Math.min(...result)
}