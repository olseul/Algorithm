function solution(n, m, section) {
    let cnt = 0;  // 페인트칠 횟수
    let current = section[0];  // 칠해야 할 구역의 시작점

    for (let i = 0; i < section.length; i++) {
        if (section[i] >= current) {
            cnt++;  // 페인트칠 횟수 증가
            current = section[i] + m;  // 롤러로 한 번 칠하고, 다음 칠할 구역 계산
        }
    }

    return cnt;  // 최소 페인트칠 횟수 반환
}
