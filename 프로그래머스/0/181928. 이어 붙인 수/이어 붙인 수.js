function solution(num_list) {
    let odd = '';
    let even = '';
    for (let element of num_list){
        if(element % 2 === 0){
            even += String(element)
        }else{
            odd += String(element)
        }
    }
    return +even + +odd
}