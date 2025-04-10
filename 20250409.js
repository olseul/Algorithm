let fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const N = +input[0];
let word = [];
for (let i = 1; i <= N; i++) {
  word.push(input[i]);
}
let arr = [...new Set(word)]; //중복제거
arr.sort(); // 사전순으로 정렬
arr.sort((a, b) => a.length - b.length); // 길이 짧은 대로 정렬

arr.forEach((result) => {
  console.log(result);
});

// 입력 :
// 단어의 개수 N
// N개의 단어가 한줄에 하나씩 (문자열의 길이는 50을 넘지 않음)

// 출력 : 조건에 따라 정렬된 단어들을 나열

// 사용할 알고리즘
// 정렬 알고리즘 sort

// 문제풀이
// 1. 중복된 단어 하나로 남기기(set함수 사용)
// 2. 사전순으로 정렬
// 3. 길이 짧은 대로 정렬
