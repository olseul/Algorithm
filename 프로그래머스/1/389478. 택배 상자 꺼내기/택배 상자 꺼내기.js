function solution(n, w, num) {
    let h = Math.floor(n/w) + 1;
    let arr = [];
    
    let result = [];
    let reverse = false;
    for(let i=1; i<=n; i++){
        result.push(i);
        if(result.length == w){
            if(!reverse){ // 차례대로면
                arr.push(result);
            }else{//반대로먄
                let reversed = result.reverse();   
                arr.push(result);
            }
            result = [];
            reverse = !reverse;
        }
    }
    if(result.length){
        let len = w-result.length;
        if(!reverse){ // 차례대로라면
            for(let i=0; i<len;i++){
                result.push(0);
            }
        }else{
            for(let i=0; i<len;i++){
                result.unshift(0);
            }
        }
        arr.push(result)
    }
    
    let a,b;
    for(let i=0; i<arr.length; i++){
        if(arr[i].includes(num)){
            a=i;
            b=arr[i].indexOf(num);
            break;
        }
    }
    
    let cnt =0;
    for(let i=a; i<arr.length; i++){
        if(arr[i][b] !== 0){
            cnt+=1;
        }
    }
    
    return cnt;
}