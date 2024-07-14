function solution(arr) {
    let stack = [];
    let i = 0;
    while(i<arr.length){
        if(stack.length == 0){
            stack.push(arr[i]);
            i += 1;
        }
        else if(stack.length !== 0 && stack[stack.length - 1] < arr[i]){
            stack.push(arr[i]);
            i+= 1;
        }
        else if(stack.length !== 0 && stack[stack.length - 1] >= arr[i]){
            stack.pop();
        }
    }
        
    return stack;
}