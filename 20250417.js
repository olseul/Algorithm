// 입력 :
// 테스트 케이스의 갯수 t
// t만큼의 n과 m
// 조합인 거 같다? mCn ㅣㅇ것처럼
// mCn = m-1Cn-1 + m-1Cn 공식을 활용하는 거 같다 왜냐하면 DP니까..

// Cn의 함수를 만든다 파라미터는 (a와 b){
//   a!/(a-b)!b! 이런 공식이니까

//   우선 a!를 구하는 공식은..

//   for(let i=1; i<=a; i++){
//     다 곱한거
//   }
//   결과1

//   (a-b)!를 구하는 공식은..
//   for(let i=1; i<=(a-b); i++){
//     다 곱한거
//   }
//   결과2

//   b!를 구하는 공식은..
//   for(let i=1; i<=b; i++){
//     다 곱한거
//   }
//   결과3

//   return 결과1/결과2*결과3

// }

// mCn = m-1Cn-1 + m-1Cn 니까
// 결과 = Cn(m-1, n-1) + Cn(m-1, n);

// return 결과

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
const input = fs.readFileSync("./input.txt").toString().trim().split("\n");
const T = +input[0];
const testCase = input.slice(1).map((a) => a.split(" ").map(BigInt));

for (let i = 0; i < T; i++) {
  let [n, m] = testCase[i];
  console.log(Combination(m, n).toString());
}
