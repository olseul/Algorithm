function solution(arr, queries) {
    let result = arr.slice();
     for (let i = 0; i < queries.length; i++) {
        let s = queries[i][0]; // 시작 인덱스
        let e = queries[i][1]; // 끝 인덱스
        for (let j = s; j <= e; j++) { // 시작 인덱스부터 끝 인덱스까지 반복
            result[j] += 1; // 해당 범위의 result 배열 요소를 1씩 증가
        }
    }
    return result;
}