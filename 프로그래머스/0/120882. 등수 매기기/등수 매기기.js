function solution(score) {
    let arr = score.map(a => (a[0] + a[1])/ 2);
    let sorted = arr.slice().sort((a,b) => b-a);
    return arr.map(a => sorted.indexOf(a) + 1);
}