function solution(s) {
    let arr = s.split(' ');
    let result = 0;
    for(let i = arr.length -1 ; i>=0; i--){
        if(arr[i] == 'Z'){
            i-=1;
            continue;
        }
        result += +arr[i];
    }
    return result;
}