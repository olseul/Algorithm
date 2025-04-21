const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");
const [n, m] = input[0].split(" ").map(Number);
let visited = Array(n + 1).fill(false);
let graph = Array.from({ length: n + 1 }, () => []);
let count = 0;

for (let i = 1; i <= m; i++) {
  let [u, v] = input[i].split(" ").map(Number);

  graph[u].push(v);
  graph[v].push(u);
}

function dfs(current) {
  visited[current] = true;
  for (const next of graph[current]) {
    if (!visited[next]) {
      dfs(next);
    }
  }
}

for (let i = 1; i <= n; i++) {
  if (!visited[i]) {
    dfs(i);
    count += 1;
  }
}

console.log(count);
