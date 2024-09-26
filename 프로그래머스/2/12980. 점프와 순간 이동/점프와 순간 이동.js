function solution(n) {
    let batteryUsage = 0;

    // N이 0이 될 때까지 반복
    while (n > 0) {
        // N이 홀수일 경우 점프가 필요
        if (n % 2 === 1) {
            batteryUsage++;  // 점프 시 배터리 사용
            n--;             // 1칸 점프
        }
        // 순간이동 (짝수일 경우)
        n = n / 2;
    }

    return batteryUsage;
}
