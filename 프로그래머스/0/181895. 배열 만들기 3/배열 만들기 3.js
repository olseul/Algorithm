function solution(arr, intervals) {
    let result = [];
    intervals.forEach(([a,b])=>{
        result = result.concat(arr.slice(a,b+1));
    })
    return result;
}