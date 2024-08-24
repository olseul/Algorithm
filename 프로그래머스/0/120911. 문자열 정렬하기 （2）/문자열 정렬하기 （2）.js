function solution(my_string) {
    return my_string.split("").map(a => a.toLowerCase()).sort().join("");
}