function solution(num_list) {
    let n1 = num_list[num_list.length-1] 
    let n2 = num_list[num_list.length-2] 
    if(n1 > n2){
        num_list.push(n1 - n2);
    }else{
        num_list.push(n1*2)
    }
    return num_list;
}