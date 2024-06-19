function solution(num_list, n) {
    let arr = num_list;
    for(let i =0;i<n;i++){
        arr.push(arr[i]);
    }
    console.log(arr);
    arr.splice(0, n);
    return arr;
}