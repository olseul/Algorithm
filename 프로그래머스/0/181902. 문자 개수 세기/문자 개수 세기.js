function solution(my_string) {
    let arr = new Array(52).fill(0);
    
    
    
    //a는 97 z는 122 A는 65 Z는 90
    console.log('z'.charCodeAt(0));
    my_string.split('').forEach(a => {
        let asc = a.charCodeAt(0);
        if(97 <= asc && asc <= 122){
            arr[a.charCodeAt(0) - 97 + 26] += 1;
        }else{
            arr[a.charCodeAt(0) - 65] += 1;
        }
    })
    return arr;
}