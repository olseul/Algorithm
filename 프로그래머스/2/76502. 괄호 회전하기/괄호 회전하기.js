function upright(s){
    let stack = [];
    for(let i = 0; i<s.length; i++){
        if(s[i] == ")"){
            if(stack.pop() != "("){
                return false;
            }
        }else if(s[i] == "}"){
            if(stack.pop() != "{"){
                return false;
            }
        }else if(s[i] == "]"){
            if(stack.pop() != "["){
                return false;
            }
        }else{
            stack.push(s[i]);   
        }
    }
    return stack.length ? false : true;
}
function solution(s) {
    let result = 0;
    for(let i = 0; i<s.length; i++){
        s = s.slice(1) + s.slice(0, 1);
        if(upright(s)){
            result += 1;
        }
    }
    return result;
}