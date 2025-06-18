const isAlphabet = (ch) => {
  return (
    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
  );
};

function solution(str1, str2) {
    let arr1 = [];
    for(let i=0; i<str1.length-1; i++){
        let arr = str1.split('').slice(i, i+2);
        let ex = true;
        for(let i=0; i<arr.length; i++){
            if(!isAlphabet(arr[i])){
                ex = false;
                break;
            }
        }
        if(ex){
            arr1.push(arr.join('').toUpperCase());
        }
    }
    
    let arr2 = [];
    for(let i=0; i<str2.length-1; i++){
        let arr = str2.split('').slice(i, i+2);
        let ex = true;
        for(let i=0; i<arr.length; i++){
            if(!isAlphabet(arr[i])){
                ex = false;
                break;
            }
        }
        if(ex){
            arr2.push(arr.join('').toUpperCase());
        }
    }
    
    let obj = new Map();

    arr1.forEach(a => {
        if (!obj.has(a)) {
            obj.set(a, [1, 0]);
        } else {
            obj.get(a)[0] += 1;
        }
    });

    arr2.forEach(a => {
        if (!obj.has(a)) {
            obj.set(a, [0, 1]);
        } else {
            obj.get(a)[1] += 1;
        }
    });

    let union = 0;
    let inter = 0;
    for(const [key, val] of obj){
        
        const [a, b] = val;
        union += Math.max(a, b);
        if (a > 0 && b > 0) {
            inter += Math.min(a, b);
        }
    }
    let result = inter/union
    if(!union && !inter) result = 1;
    return Math.floor(result * 65536)
}