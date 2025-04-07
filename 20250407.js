const fs = require("fs");
const input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map(Number);

const len = input.length;
const sum = input.reduce((acc, cur) => acc + cur, 0);
for (let i = 0; i < len; i++) {
  for (let j = i + 1; j < len; j++) {
    if (sum - input[i] - input[j] == 100) {
      console.log(
        input
          .filter((num) => num !== input[i] && num !== input[j])
          .sort((a, b) => a - b)
          .join("\n")
      );
      return;
    }
  }
}
