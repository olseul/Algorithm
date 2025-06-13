function solution(answers) {
    let obj = {
        '1' : [1,2,3,4,5],
        '2' : [2,1,2,3,2,4,2,5],
        '3' : [3,3,1,1,2,2,4,4,5,5],
    }
    let sum = [0,0,0];
    let len = answers.length;
    
    answers.forEach((a, idx)=>{
        if(obj['1'][idx%5] == a){
            sum[0] += 1;
        }
        if(obj['2'][idx%8] == a){
            sum[1] += 1;
        }
        if(obj['3'][idx%10] == a){
            sum[2] += 1;
        }
    })
    let maxval = Math.max(...sum);
    let arr = sum.map((a, idx)=>[idx+1, a]).filter(a => a[1] == maxval).map(a=>a[0]);
    
    return arr.sort((a,b)=>a-b);
}