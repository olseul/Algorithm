function solution(polynomial) {
    let arr = polynomial.split(' + ');
    let x = 0;
    let con = 0;
    for(let i = 0; i<arr.length; i++){
        if(arr[i].includes('x')){
            if(arr[i] == 'x'){
                x += 1;
            }else{
                x += +arr[i].slice(0, -1);   
            }
        }else{
            con += +arr[i];
        }
    }
    
    let strx = ''
    if(x == 1){
        strx = 'x';
    }else if(x !== 1){
        strx = String(x) + 'x';
    }
    
    if(x == 0){
        return String(con);
    }else if(con == 0){
        return strx;
    }else if(x !== 0 && con !== 0){
        return strx + " + " + String(con);
    }
}