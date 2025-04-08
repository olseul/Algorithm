// 입력 : 온라인 저지 회원의 수 : N
// N개의 수만큼 회원의 나이 이름( 1 <= 나이 <= 200) (1 <= 이름의 길이 <=100)
// 출력 : N개의 줄을 나이순서대로, 나이가 같으면 가입한 순으로 출력

// 풀이
// 1. n을 제외한 나머지를 이차원 배열로 가짐
// 2. sort를 사용하여 이차원배열의 첫번째 원소를 내림차순함
// 3. 첫번째 원소가 같다면, 두번째 원소로

const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");
// ["3",
// "21 Junkyu",
// "21 Dohyun",
// "20 Sunyoung"]
const N = +input[0];

let members = [];
for (let i = 1; i <= N; i++) {
  const [age, name] = input[i].split(" ");
  members.push([+age, name]);
}
// [[21, "Junkyu"],
// 21, "Dohyun",
// 20, "Sunyoung"]]

members.sort((a, b) => a[0] - b[0]);

members.forEach(([age, name]) => {
  console.log(`${age} ${name}`);
});
