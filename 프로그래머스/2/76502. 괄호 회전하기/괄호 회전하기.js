function solution(s) {
    let arr = s.split('');
    let cnt = 0;
    
    for(let i = 0; i<s.length; i++){
        let stack = [];
        //arr 조인한게 올바른 문자열인지 확인
        let correct = true;
        for(let j = 0; j<s.length; j++){
            let last = stack[stack.length - 1];
            if(arr[j] == "{" || arr[j] == "("|| arr[j] == "["){
                stack.push(arr[j]);
            }else if(arr[j] == "}"){
                if(last == "{"){
                    stack.pop();
                }else{
                    correct = false;
                    break;
                }
            }else if(arr[j] == ")"){
                if(last == "("){
                    stack.pop();
                }else{
                    correct = false;
                    break;
                }
            }else if(arr[j] == "]"){
                if(last == "["){
                    stack.pop();
                }else{
                    correct = false;
                    break;
                }
            }
        }
        if(correct && stack.length == 0){
            cnt += 1;
        }
        
        // 왼쪽으로 옮기는 코드
        let last = arr.pop();
        arr.unshift(last);
    }
    return cnt;
}