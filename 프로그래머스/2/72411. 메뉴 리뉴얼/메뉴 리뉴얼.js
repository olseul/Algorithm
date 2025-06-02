function combination(arr,n){
    let result=[]
    function dfs(current,idx){
        if(current.length===n){
            result.push([...current])
            return
        }
        for(let i=idx;i<arr.length;i++){
            current.push(arr[i])
            dfs(current,i+1)
            current.pop()
        }
    }
    dfs([],0)
    return result
}

function solution(orders, course) {
    let comcount = new Map();
    orders.forEach(a=>{
        course.forEach(b=>{
            let arr = combination(a.split('').sort(), b);
            arr.map(c=>{
                comcount.set(c.join(''), (comcount.get(c.join('')) || 0) + 1);
            })
        })
    })
    
    let result = [];
    course.forEach(a=>{
        let filtered = [...comcount.entries()].filter(([key, count])=> key.length == a && count >= 2);
        
        if (filtered.length === 0) return;
        
        const max = Math.max(...filtered.map(([_, count]) => count));

        filtered.forEach(([key, count]) => {
            if (count === max) result.push(key);
        });
    })
    return result.sort();
}