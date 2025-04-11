const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const N = +input[0];
let arr = input.slice(1);

// 입력 :
// 학생의 수 n
// n개의 줄(이름, 생일(dd mm yyyy) (1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31)
// 이름 같은사람은x

// 출력:
// 나이가 가장 적은 사람의 이름
// 나이가 가장 많은 사람의 이름

// 문제풀이
// 1. 정렬하기(년도->월->일 순으로 오름차순 정렬)
// arr.sort((a, b) => {
//   return +a.slice(-4) - +b.slice(-4);
//   return +a.slice
// });

let members = [];
arr.forEach((element, idx) => {
  members.push(element.split(" "));
});

members.sort((a, b) => {
  if (a[3] !== b[3]) return a[3] - b[3];
  if (a[2] !== b[2]) return a[2] - b[2];
  return a[1] - b[1];
});

console.log(members[N - 1][0] + "\n" + members[0][0]);
