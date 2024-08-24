function solution(numbers, direction) {
    if(direction == "left"){
        let num = numbers.splice(0, 1);
        numbers.push(...num);
        
        return numbers;
    }else{
        let num = numbers.splice(numbers.length - 1, 1);
        let result = [];
        result.push(...num);
        result.push(...numbers);
        
        return result;
    }
}