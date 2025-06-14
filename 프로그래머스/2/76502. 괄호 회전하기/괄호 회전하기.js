function solution(s) {
    let arr = s.split('');
    let result = [];
    for(let i=0; i<s.length; i++){
        let stack = [];
        let correct = true;
        for(let j=0; j<s.length; j++){
            if(arr[j] == '{' || arr[j] == '(' || arr[j] == '['){
                stack.push(arr[j]);
            }else{
                if(arr[j] == '}' && stack[stack.length-1] == '{' ){
                    stack.pop();
                    continue;
                }
                else if(arr[j] == ']' && stack[stack.length-1] == '[' ){
                    stack.pop();
                    continue;
                }
                else if(arr[j] == ')' && stack[stack.length-1] == '(' ){
                    stack.pop();
                    continue;
                }else{
                    correct = false;
                    break;
                }
            }
        }
        if(stack.length !== 0){
            correct = false;
        }
        result.push(correct)
        arr.unshift(arr[arr.length-1])
        arr.pop();
    }
    return result.filter(a=>a).length
}