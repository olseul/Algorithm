// 입력 :
// 빙고 5x5 입력
// 사회자가 부르는 25까지의 순서를 랜덤으로 부르기

// 출력 :
// 첫째 줄에 사회자가 몇 번째 수를 부른 후 철수가 "빙고"를 외치게 되는지 출력한다.

// 문제 풀이 :
// 일단 이차원 배열을 만든다? 각각의 x,y좌표를 저장

// 빙고인지는 어떻게 판단하지?

// 그 수의 좌표 (x, y)를 미리 맵으로 저장해두자

// 불린 수를 0으로 바꾼다

// row[x]++, col[y]++

// 만약 (x === y) → diag[0]++
// 만약 (x + y === 4) → diag[1]++

const fs = require("fs");
const input = fs
  .readFileSync("./input.txt")
  .toString()
  .trim()
  .split("\n")
  .map((a) => {
    return a.split(" ").map(Number);
  });

let rowCheck = Array(5).fill(0); //가로줄 빙고 체크
let colCheck = Array(5).fill(0); //세로줄 빙고 체크
let diag = [0, 0]; // 대각선 빙고 체크

let board = input.slice(0, 5);
let calls = input.slice(5).flat();

// 이렇게 3중포문 써도괜찮은가?
// 하나하나 지울떄마다 보드판의 빙고 개수를 확인 하는 것이 실제로 불가능할지 연산개수로 한번 확인해보세요 !
// 보드판에서 빙고를 확인하기 위해 몇번의 연산이 필요할지, 사회자가 부르는 숫자를 체크하기 위해 몇번의 연산이 필요할지, 사회자가 총 몇개의 숫자를 부르는지 등을 생각하며 연산의 개수를 확인해보시면 좋을것같습니다 :미소짓는_얼굴: (편집됨)
// 10:02
// +) 한줄씩 빙고가 됐는지 충분히 시간안에 확인이 가능하답니다 !
calls.forEach((call, idx) => {
  board.forEach((row, i) => {
    row.forEach((num, j) => {
      if (call == num) {
        if (i === j) {
          diag[0] += 1;
        }
        if (i + j === 4) {
          //이부분 else if로 해서 2,2 인 경우를 제외해서 diag가 5,4인걸 확인하고 고쳤음
          diag[1] += 1;
        }
        rowCheck[i] += 1;
        colCheck[j] += 1;
      }

      // 빙고인지 체크하기
      const bingoCount =
        rowCheck.filter((v) => v === 5).length +
        colCheck.filter((v) => v === 5).length +
        diag.filter((v) => v === 5).length;

      if (bingoCount >= 3) {
        console.log(idx + 1); // 몇 번째 수인지 (index + 1)
        process.exit();
      }
    });
  });
});

console.log(diag);
