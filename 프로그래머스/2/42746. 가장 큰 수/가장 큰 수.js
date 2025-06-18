function solution(numbers) {
    let result = numbers
        .map(String)
        .sort((a, b) => (b + a).localeCompare(a + b))
        .join('');

    // '0000' 같은 경우 → '0' 하나로 처리
    return result[0] === '0' ? '0' : result;
}
