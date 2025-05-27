const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let str = input[0].split("");
let result = [];
let tag = false;
let arr = [];

for (let i = 0; i < str.length; i++) {
  if (str[i] == "<") {
    tag = true;
    if (arr.length > 0) {
      result.push(...arr.reverse());
      arr = [];
    }
  }

  if (tag) {
    if (str[i] !== ">") {
      result.push(str[i]);
    } else if (str[i] == ">") {
      result.push(str[i]);
      tag = false;
    }
  } else if (!tag) {
    if (str[i] == " " || i == str.length - 1) {
      if (i == str.length - 1) {
        result.push(str[i]);
      }
      result.push(...arr.reverse());
      if (str[i] == " ") {
        result.push(" ");
      }
      arr = [];
    } else {
      arr.push(str[i]);
    }
  }
}

console.log(result.join(""));
