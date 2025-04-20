const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");
const [n, k] = input[0].split(" ").map(Number);
let visited = Array(n - 1).fill(false);
const arr = input.slice(1).map(Number);
let m = 0;
let find = false;

function dfs(value) {
  visited[value] = true;
  let current = arr[value];
  if (arr[current] == k) {
    find = true;
  }
  if (!visited[current]) {
    m += 1;
    dfs(current);
  }
  if (visited[current]) {
    return false;
  }
}

for (let i = 0; i < n; i++) {
  if (!visited[i]) {
    if (find) {
      break;
    }
    if (!dfs(i)) {
      break;
    }
  }
}

if (find) {
  console.log(m);
} else {
  console.log(-1);
}
