// 입력
// N : 전체 사람의 수
// N개의 줄 : 각 사람의 몸무게와 키

// 출력
// 각각의 덩치등수

// 문제 풀이
// 포문을 돌며 각각 자기보다 큰 게 몇개 있나 숫자를 세서 ..출력하면 되지 않을까

const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");

const N = +input[0];
let members = input.slice(1).map((a) => a.split(" ").map(Number));

let output = new Array(N).fill(0);

for (let i = 0; i < N; i++) {
  for (let j = i + 1; j < N; j++) {
    if (members[i][0] < members[j][0] && members[i][1] < members[j][1]) {
      output[i] += 1;
    }
    if (members[i][0] > members[j][0] && members[i][1] > members[j][1]) {
      output[j] += 1;
    }
  }
}

console.log(output.map((a) => a + 1).join(" "));
