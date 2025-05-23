function solution(intStrs, k, s, l) {
    return intStrs.map(a => {
        return +a.slice(s, s+l);
    }).filter(a=> a>k);
}