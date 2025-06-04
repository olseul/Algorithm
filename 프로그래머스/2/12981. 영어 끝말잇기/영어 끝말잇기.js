function solution(n, words) {
    let stack = [];
    
    for(let i = 0; i<words.length; i++){
        if(words[i].length == 1){
            return [(i+1)%n == 0 ? n : (i+1)%n, Math.ceil((i+1)/n)];
        }
        if(stack.includes(words[i])){
            return [(i+1)%n == 0 ? n : (i+1)%n, Math.ceil((i+1)/n)];
        }
        
        let top = stack[stack.length - 1];
        let word = words[i];

        console.log(top, word)
        if(stack.length !== 0){
            if(top[top.length - 1] !== word[0]){
                return [(i+1)%n == 0 ? n : (i+1)%n, Math.ceil((i+1)/n)];
            }else{
                stack.push(words[i]);
            }
        }  
        else{
            stack.push(words[i]);
        }
    }
    return [0,0]

}