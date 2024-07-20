function solution(rank, attendance) {
    // map 첫번 째 인자는 요소, 두번 째 인자는 인덱스
    let result = rank.map((r, i) => [r, attendance[i], i]); 
    result.sort((a, b) => a[0] - b[0]);
    
    let select = result.filter((a) => a[1] == true).slice(0, 3);
    
    return select[0][2] * 10000 + select[1][2] * 100 + select[2][2]
 }