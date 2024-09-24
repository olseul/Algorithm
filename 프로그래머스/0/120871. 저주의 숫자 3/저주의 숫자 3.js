function solution(n) {
    let arr = [];
    let i = 1;
    while(arr.length != n){
        if(String(i).split('').includes('3') || i % 3 == 0){
            i += 1;
            continue;
        }else{
            arr.push(i);
            i += 1;
        }
    }
    return arr[arr.length - 1];
}