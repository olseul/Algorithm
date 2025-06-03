function solution(board, moves) {
    let arr = [];
    
    let n = board.length;
    for(let i= 0; i<n; i++){
        let stack = [];
        for(let j = n-1; j>=0; j--){
            stack.push(board[j][i]);
        }
        arr.push(stack);
    }
    let result = []; //바구니
    let cnt = 0;
    moves.map(a=>a-1).forEach(a=>{
        while (arr[a].length > 0) {
            let doll = arr[a].pop();
            if (doll === 0) continue; // 💥 핵심: 0은 인형이 아니니까 무시

            if (result[result.length - 1] === doll) {
                result.pop();
                cnt += 2;
            } else {
                result.push(doll);
            }
            break;
        }  
    });
    return cnt;
}