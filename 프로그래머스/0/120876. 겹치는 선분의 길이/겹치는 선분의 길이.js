function solution(lines) {
    let map = new Array(201).fill(0); // -100부터 100까지
    
    lines.forEach(line => {
        let [start, end] = line;
        for(let i = start; i<end; i++){
            map[100+i]+=1;
        }
    })
    return map.filter(a => (a >= 2)).length;
}