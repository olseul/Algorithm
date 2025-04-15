const fs = require("fs");
const n = +fs.readFileSync("/dev/stdin").toString().trim();

let fibo = [0n, 1n];

for (let i = 2; i <= n; i++) {
  fibo.push(fibo[i - 1] + fibo[i - 2]);
}

console.log(fibo[n].toString());
