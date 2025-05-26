function solution(q, r, code) {
    return code.split('').filter((a, idx) => (idx % q == r)).join('')
}