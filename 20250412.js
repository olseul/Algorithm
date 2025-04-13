const fs = require("fs");
const input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split(" ")
  .map(Number);

// 입력 :
// 나무 조각 5개 출력

// 출력 :
// 첫 번째 조각의 수가 두 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 두 번째 조각의 수가 세 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 세 번째 조각의 수가 네 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 네 번째 조각의 수가 다섯 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 만약 순서가 1, 2, 3, 4, 5 순서가 아니라면 1 단계로 다시 간다.

// 두 조각의 순서가 바뀔때 마다 조각의 순서를 출력한다.

// 문제 풀이
// 1. if문을 사용하여 서로 위치를 바꾸면될 거 같다.
// 2. 반복문이니.. while문을 써서 첫번째에 1,2,3,4,5 순서가 맞다면 break를 쓰면 될 거 같다.
// 3.

while (true) {
  for (let i = 0; i < 4; i++) {
    if (input[i] > input[i + 1]) {
      let tmp = input[i];
      input[i] = input[i + 1];
      input[i + 1] = tmp;

      console.log(
        `${input[0]} ${input[1]} ${input[2]} ${input[3]} ${input[4]}`
      );
    }
  }
  if (
    input[0] == 1 &&
    input[1] == 2 &&
    input[2] == 3 &&
    input[3] == 4 &&
    input[4] == 5
  ) {
    break;
  }
}
