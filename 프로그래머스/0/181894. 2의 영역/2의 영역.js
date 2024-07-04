function solution(arr) {
    if(!arr.includes(2)) return [-1];
    
    let start = arr.indexOf(2);
    let end = arr.lastIndexOf(2);
    
    return arr.slice(start, end + 1);
}