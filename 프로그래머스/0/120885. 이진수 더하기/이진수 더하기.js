function solution(bin1, bin2) {
    let max = Math.max(bin1.length, bin2.length);
    let num1 = bin1.padStart(max, '0').split('').reverse();
    let num2 = bin2.padStart(max, '0').split('').reverse();
    
    let result = [];
    let before = 0;
    for(let i = 0; i<num1.length; i++){
        let sum = +num1[i] + +num2[i] + before;
        result.push(sum%2);
        before = Math.floor(sum / 2);
    }
    if(before){
        result.push(before);
    }
    
    return result.reverse().join('');
}