function solution(arr1, arr2) {
    const m = arr1.length;          // arr1의 행 수
    const n = arr1[0].length;       // arr1의 열 수 
    const p = arr2[0].length;       // arr2의 열 수

    const result = []; // 빈 배열 생성
    for (let i = 0; i < m; i++) {
        result[i] = []; // 각 행을 추가
        for (let j = 0; j < p; j++) {
            result[i][j] = 0; // 각 원소를 0으로 초기화
        }
    }
    
    for (let i = 0; i < m; i++) {      
        for (let j = 0; j < p; j++) { 
            for (let k = 0; k < n; k++) { 
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return result;  
}
