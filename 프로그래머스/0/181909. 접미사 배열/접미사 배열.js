function solution(my_string) {
    var answer = [];
    for(let i =0;i<my_string.length;i++){
        answer.push(my_string.slice(my_string.length - 1 - i));
    }
    answer.sort(); //이게 사전순으로 정렬
    return answer;
}