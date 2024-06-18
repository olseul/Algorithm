function solution(num_list) {
    var answer = [];
    answer = num_list.sort((a,b) => (a - b));
    answer.splice(5);
    // 배열에서 스플라이스와 슬라이드 둘 다 사용가능, 스플라이스는 제거 슬라이스는 그만큼 가져오는 건데
    // 슬라이스는 원래 배열에 지장이 x
    // 문자열에서 슬라이스 사용가능
    return answer;
}