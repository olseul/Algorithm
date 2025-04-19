const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");
const T = +input[0];
let line = 1;

for (let i = 0; i < T; i++) {
  let length = +input[line];
  let arr = [0, ...input[line + 1].split(" ").map(Number)];
  let visited = Array(length + 1).fill(false);
  let count = 0;

  function dfs(value) {
    visited[value] = true;
    let current = arr[value];
    if (!visited[current]) {
      dfs(current);
    }
  }

  for (let i = 1; i <= length; i++) {
    if (!visited[i]) {
      dfs(i); // 순회 시작위치 (어디까지 순회를 돌 수 있는지)
      count += 1;
    }
  }
  console.log(count);
  line += 2;
}
