function solution(num_list) {
    for(const num in num_list){
        if(num_list[num] < 0){
            return +num;
        }
    }
    return -1;
}