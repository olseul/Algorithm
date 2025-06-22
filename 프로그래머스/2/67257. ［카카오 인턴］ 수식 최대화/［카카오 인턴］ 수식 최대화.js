function permutation(arr,n){   
    let result =[]
    const visited = Array(arr.length).fill(false); // 방문 여부를 체크할 배열
    
    function dfs(current){
        if(current.length===n){
            result.push([...current])
            return 
        }
        for(let i=0; i<arr.length;i++){
            if(!visited[i]){    //방문 여부 체크 후
                visited[i]=true     //방문처리
                current.push(arr[i])
                dfs(current)
                current.pop()
                visited[i]=false    //다음 반복을 위해 미방문 처리
            }
        }
    }
    dfs([])
    
    return result
}

function solution(expression) {
    let operator = ['*', '-', '+'];
    let stack = [];
    let nowoperator = new Set();
    let result = [];
    expression.split('').forEach(a=>{
        if(!operator.includes(a)){
            stack.push(a);
        }else{
            result.push(+(stack.join('')));
            result.push(a);
            nowoperator.add(a);
            stack = [];
        }
    })
    
    if(stack.length){
        result.push(+(stack.join('')));
    }
    let op = Array.from(nowoperator);
    let answer = [];
    permutation(op, op.length).forEach(a=>{ 
        let tmp = [...result];
        for(let b of a){ // [ '-', '*', '+' ]
            while(tmp.includes(b)){
                let idx = tmp.indexOf(b);
                let cal = eval(`${tmp[idx-1]}${b}${tmp[idx+1]}`);
                tmp.splice(idx-1, 3, cal);
            }
        }
        if(tmp < 0){
            tmp = tmp * -1;
        }
        answer.push(tmp);
    })
    return Math.max(...answer);
}