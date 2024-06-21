function solution(myString) {
    let arr = myString.split('x').filter(x => x != "");
    arr.sort();
    return arr;
}