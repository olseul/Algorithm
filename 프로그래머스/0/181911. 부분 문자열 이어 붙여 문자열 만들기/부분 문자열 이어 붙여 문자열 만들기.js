function solution(my_strings, parts) {
    let result = ""
    parts.map(([a,b], idx) => {
        result += my_strings[idx].slice(a, b+1);
    })
    return result;
}