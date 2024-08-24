function solution(my_string) {
    return my_string.split("").map(a => +a).filter(a => 0<=a && a<=9).sort((a, b) => (a - b));
}