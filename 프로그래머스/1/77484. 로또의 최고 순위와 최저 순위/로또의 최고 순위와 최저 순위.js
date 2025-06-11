function solution(lottos, win_nums) {
    let rank = {
        '0' : 6,
        '1' : 6,
        '2' : 5,
        '3' : 4,
        '4' : 3,
        '5' : 2,
        '6' : 1,
    }
    
    let eq = lottos.filter((a, idx)=> win_nums.includes(a)).length; // 같은 거
    let zero = lottos.filter((a,idx)=> !a).length;
    
    return [rank[(eq + zero).toString()], rank[eq.toString()]];
    
}