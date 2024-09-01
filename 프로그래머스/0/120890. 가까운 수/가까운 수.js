function solution(array, n) {
    array.sort((a, b) => Math.abs(a - n) - Math.abs(b - n) || a-b);
    return array[0];
}