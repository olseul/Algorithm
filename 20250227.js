const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = Number(input[0]);
const target = input.slice(1).map(Number);
let current = 1; //1~n까지 어디까지 넣었는지?

let stack = [];
let result = [];

let possible = true;
for (let num of target) {
  while (current <= num) {
    stack.push(current);
    current++;
    result.push("+");
  }

  if (stack[stack.length - 1] == num) {
    stack.pop();
    result.push("-");
  } else {
    possible = false;
    break;
  }
}

if (possible) {
  console.log(result.join("\n"));
} else {
  console.log("NO");
}
