function solution(cipher, code) {
        return cipher.split('').filter((a, idx) => (idx + 1) % code == 0).join('');
}