const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const [n, k] = input[0].split(" ").map(Number);
const arr = input.slice(1).map(Number);

const visited = Array(n).fill(false);
let m = 1;
let current = 0;

while (true) {
  //보성이 발견되면 나오기
  if (arr[current] === k) {
    console.log(m);
    break;
  }
  //싸이클 돌면 나오기
  if (visited[current]) {
    console.log(-1);
    break;
  }

  visited[current] = true;
  current = arr[current]; // 지목한 사람으로 이동
  m++;
}
