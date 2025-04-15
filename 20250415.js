const fs = require("fs");
const n = +fs.readFileSync("./input.txt").toString().trim();

let fibo = [0n, 1n];
for (let i = 2; i <= n; i++) {
  fibo[i] = fibo[i - 1] + fibo[i - 2];
}

console.log(fibo[n].toString());
