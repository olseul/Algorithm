function solution(age) {
    let arr = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'];
    return age.toString().split("").map(a => arr[+a]).join("");
}