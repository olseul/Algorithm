function solution(s) {
    let arr = s.toLowerCase().split('');
    
    if(arr[0] !== " "){
        arr[0] = arr[0].toUpperCase();
    }
    for(let i = 1; i<s.length; i++){
        if(arr[i-1] == " " && arr[i] !== " "){
            arr[i] = arr[i].toUpperCase();
        }
    }
    return arr.join('');
}