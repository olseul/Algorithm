function solution(num_list, n) {
    let a = num_list[0];
    return num_list.filter((a, idx) => idx%n == 0);
}