function solution(my_string) {
    return my_string.split('').filter(a => !isNaN(a)).map(a => parseInt(a)).reduce((acc, cur) => acc + cur, 0);
}