const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = +input[0];
const m = +input[1];

let graph = Array.from({ length: n + 1 }, () => []);
let visited = Array(n + 1).fill(false);
let len = Array(n + 1).fill(0);

// 그래프 구성
for (let i = 1; i <= m; i++) {
  const [u, v] = input[i + 1].split(" ").map(Number);
  graph[u].push(v);
  graph[v].push(u);
}

// BFS 구현
function bfs(start) {
  const queue = [start];
  visited[start] = true;
  len[start] = 0;

  while (queue.length) {
    const current = queue.shift();

    for (const next of graph[current]) {
      if (!visited[next]) {
        visited[next] = true;
        len[next] = len[current] + 1; // 바로 전 노드 거리 + 1
        queue.push(next);
      }
    }
  }
}

bfs(1);

console.log(len.filter((a) => 1 <= a && a <= 2).length);
