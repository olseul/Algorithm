function solution(s) {
    const obj = {
        'zero' : '0',
        'one' : '1',
        'two' : '2',
        'three' : '3',
        'four' : '4',
        'five' : '5',
        'six' : '6',
        'seven' : '7',
        'eight' : '8',
        'nine' : '9',
    }
    
    let arr = Object.entries(obj);
    arr.forEach(([key, val])=>{
        if(s.includes(key)){
            s = s.replaceAll(key, val);
        }
    })
    return +s;
}