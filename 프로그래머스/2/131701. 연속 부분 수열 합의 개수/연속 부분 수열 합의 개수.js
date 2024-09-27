function solution(elements) {
    let result = new Set();
    const n = elements.length; // 원래 배열의 길이를 사용
    elements = elements.concat(elements); // 배열을 두 번 이어붙이기

    for (let i = 1; i <= n; i++) { // 원래 배열의 길이까지만 반복
        for (let j = 0; j < n; j++) { // 시작 지점도 원래 배열의 길이까지만
            let sum = 0;
            for (let k = 0; k < i; k++) {
                sum += elements[j + k];
            }
            result.add(sum); // Set에 합 추가 (중복 자동 제거)
        }
    }
    return result.size;
}
