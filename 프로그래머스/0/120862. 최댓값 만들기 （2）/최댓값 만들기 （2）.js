function solution(numbers) {
    // 젤 작은거 2개 또는 제일 큰거 2개 비교
    numbers.sort((a, b) => a - b);
    let plus = numbers[0] * numbers[1];
    let minus = numbers[numbers.length - 1] * numbers[numbers.length -2];
    return plus > minus ? plus : minus;
}