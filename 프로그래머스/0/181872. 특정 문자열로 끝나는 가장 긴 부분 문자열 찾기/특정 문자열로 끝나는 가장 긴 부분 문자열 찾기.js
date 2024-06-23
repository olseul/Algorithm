function solution(myString, pat) {
    let idx = myString.lastIndexOf(pat);
    let str = myString.slice(0, idx);
    return str + pat;
}