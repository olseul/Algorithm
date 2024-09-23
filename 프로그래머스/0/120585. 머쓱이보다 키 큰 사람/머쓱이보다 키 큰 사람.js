function solution(array, height) {
    return array.filter(a => (height < a)).length
}