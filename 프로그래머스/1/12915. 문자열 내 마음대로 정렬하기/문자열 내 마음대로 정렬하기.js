function solution(strings, n) {
    return strings.map(a=>a.split('')).sort((a,b)=>a[n].localeCompare(b[n]) || a.join('').localeCompare(b.join(''))).map(a=>a.join(''));
}