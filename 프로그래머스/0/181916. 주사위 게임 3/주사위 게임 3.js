function solution(a, b, c, d) {
    let arr = [a, b, c, d];
    let dic = {};

    // 주사위 값의 빈도를 계산
    for (let i = 0; i < arr.length; i++) {
        if (dic[arr[i]] == undefined) {
            dic[arr[i]] = 1;
        } else {
            dic[arr[i]] += 1;
        }
    }

    // 빈도를 배열로 변환하고 빈도 기준으로 정렬 (빈도가 높은 순)
    let sorted = Object.entries(dic).sort(([, a], [, b]) => b - a);

    // key 값을 숫자로 변환
    sorted = sorted.map(([key, value]) => [parseInt(key), value]);

    let result = 0;

    // 1. 네 주사위 숫자가 모두 같을 때
    if (sorted[0][1] == 4) {
        result = 1111 * sorted[0][0];
    }
    // 2. 세 주사위가 같고 나머지 하나가 다를 때
    else if (sorted[0][1] == 3) {
        result = Math.pow(10 * sorted[0][0] + sorted[1][0], 2);
    }
    // 3. 두 개씩 같은 숫자가 나올 때
    else if (sorted[0][1] == 2 && sorted[1][1] == 2) {
        result = (sorted[0][0] + sorted[1][0]) * Math.abs(sorted[0][0] - sorted[1][0]);
    }
    // 4. 두 개가 같고 나머지 두 개가 각각 다를 때
    else if (sorted[0][1] == 2 && sorted[1][1] == 1) {
        result = sorted[1][0] * sorted[2][0];
    }
    // 5. 네 숫자가 모두 다를 때
    else {
        result = Math.min(...arr);
    }

    return result;
}
