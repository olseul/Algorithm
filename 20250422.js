const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");

const n = +input[0];
const [a, b] = input[1].split(" ").map(Number);
const m = +input[2];
let graph = Array.from({ length: n + 1 }, () => []);
let visited = Array(n + 1).fill(false);
let count = 0;

for (let i = 1; i <= m; i++) {
  const [x, y] = input[i + 2].split(" ").map(Number);

  graph[x].push(y);
  graph[y].push(x);
}

function dfs(value) {
  visited[value] = true;

  for (const next of graph[value]) {
    if (!visited[next]) {
      count += 1;
      if (next == b) {
        console.log(count);
        return true;
      }
      if (dfs(next)) {
        return true;
      }
      count -= 1;
    }
  }
  return false;
}

if (!dfs(a)) {
  console.log(-1);
}
