function solution(a, b, c, d) {
  const arr = [a, b, c, d];
  const counts = {};

  // 주사위 숫자 빈도 수 계산
  for (const num of arr) {
    counts[num] = (counts[num] || 0) + 1;
  }

  const keys = Object.keys(counts).map(Number); // 중복 제거된 숫자들
  const values = Object.values(counts); // 각 숫자의 빈도

  // case 1: 모두 같은 숫자
  if (keys.length === 1) {
    return 1111 * keys[0];
  }

  // case 2: 하나가 3개, 하나가 1개
  if (keys.length === 2 && (values.includes(3) && values.includes(1))) {
    const p = keys.find(k => counts[k] === 3);
    const q = keys.find(k => counts[k] === 1);
    return Math.pow(10 * p + q, 2);
  }

  // case 3: 각각 두 개씩 나옴
  if (keys.length === 2 && values[0] === 2 && values[1] === 2) {
    const [p, q] = keys;
    return (p + q) * Math.abs(p - q);
  }

  // case 4: 하나가 2개, 나머지 2개가 다 다름
  if (keys.length === 3 && values.includes(2)) {
    const qrs = keys.filter(k => counts[k] === 1);
    return qrs[0] * qrs[1];
  }

  // case 5: 모두 다름
  if (keys.length === 4) {
    return Math.min(...keys);
  }
}