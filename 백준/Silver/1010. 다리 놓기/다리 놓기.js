function Combination(a, b) {
  let result1 = 1n;
  for (let i = 1n; i <= a; i++) {
    result1 *= i;
  }

  let result2 = 1n;
  for (let i = 1n; i <= a - b; i++) {
    result2 *= i;
  }

  let result3 = 1n;
  for (let i = 1n; i <= b; i++) {
    result3 *= i;
  }

  let result = BigInt(result1 / (result2 * result3));

  return result;
}

const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");
const T = +input[0];
const testCase = input.slice(1).map((a) => a.split(" ").map(BigInt));

for (let i = 0; i < T; i++) {
  let [n, m] = testCase[i];
  console.log(Combination(m, n).toString());
}