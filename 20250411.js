const fs = require("fs");
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");

// 입력
// n : 응시한 학생 수
// k : 상을 받을 사람 수
// x : 각 학생의 점수

// 출력 : 상을 받을 사람 수 중 가장 낮은 점수

// 문제풀이
// 1. 점수들을 내림차순 정렬한 후, k-1인덱스의 점수를 출력한다.
console.log(input);

const [n, k] = input[0].split(" ");
let scores = input[1].split(" ");
scores.sort((a, b) => +b - +a);

console.log(scores[k - 1]);
