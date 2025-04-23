const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let i = 0;
while (i <= input.length) {
  let t = +input[i];
  if (t == 0) {
    break;
  }
  let word = input.slice(i + 1, i + t + 1);

  word.sort((a, b) => a.toLowerCase().localeCompare(b.toLowerCase()));
  console.log(word[0]);
  i = i + t + 1;
}
