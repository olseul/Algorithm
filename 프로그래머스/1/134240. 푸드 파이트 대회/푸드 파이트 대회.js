function solution(food) {
    let water = food.shift();
    let str = food.map(a => (a - (a % 2)))
    .map(b => (b / 2))
    .map((c, i) => String(i+1).repeat(c))
    .filter(d => d !== 0);
    
    let rv_str = [...str].reverse();
    
    str.push(String(0).repeat(water));
    str.push(...rv_str)
    
    return str.join('');
}