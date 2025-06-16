function solution(s) {
    let arr = s.split('');
    arr.shift();
    arr.pop();
    let c = false;
    let result = [];
    let bundle = [];
    for(let i=0; i<arr.length; i++){
        if(arr[i] == '{'){
            paren = true;
        }else if(arr[i] == '}'){
            result.push(bundle.join('').split(',').map(Number));
            bundle = [];
            paren = false;
        }else{
            if(!paren) {continue;}
            bundle.push(arr[i])
        }
    }
    let sorted = result.sort((a,b) => a.length - b.length);
    
    result = [];
    sorted.map(a=>{
        for(let i=0; i<a.length; i++){
            if(!result.includes(a[i])){
                result.push(a[i])
            }
        }
    })
    return result;
    
}