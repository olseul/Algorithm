function solution(dots) {
    // x 좌표에서 최대값과 최소값을 구해서 너비를 계산
    let width = Math.max(dots[0][0], dots[1][0], dots[2][0], dots[3][0]) - Math.min(dots[0][0], dots[1][0], dots[2][0], dots[3][0]);

    // y 좌표에서 최대값과 최소값을 구해서 높이를 계산
    let height = Math.max(dots[0][1], dots[1][1], dots[2][1], dots[3][1]) - Math.min(dots[0][1], dots[1][1], dots[2][1], dots[3][1]);

    // 넓이 계산
    return width * height;
}
