function solution(quiz) {
    let result = [];
    for(let i = 0; i < quiz.length; i++){
        let arr = quiz[i].split(' ');
        if(arr[1] == "+"){
            if(parseInt(arr[0]) + parseInt(arr[2]) == parseInt(arr[4])){
                result.push("O");
            }else{
                result.push("X");
            }
        }else{
             if(parseInt(arr[0]) - parseInt(arr[2]) == parseInt(arr[4])){
                result.push("O");
            }else{
                result.push("X");
            }
        }
    }
    return result;
}