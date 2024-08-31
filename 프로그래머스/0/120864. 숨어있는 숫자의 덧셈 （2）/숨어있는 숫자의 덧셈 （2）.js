function solution(my_string) {
    return my_string.replace(/[A-z]/g, " ").split(" ").filter(a => a !== "").reduce((acc, cur) => acc + +cur,0)
}