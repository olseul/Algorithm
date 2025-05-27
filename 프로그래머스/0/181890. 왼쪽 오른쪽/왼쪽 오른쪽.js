function solution(str_list) {
    let a = str_list.indexOf('l');
    let b = str_list.indexOf('r');
    
    if(a === -1 && b === -1){
        return [];
    }
    
    if(a === -1) a = 2000;
    if(b === -1) b = 2000;
    
    if(a<b){
        return str_list.slice(0, a);
    }else{
        return str_list.slice(b+1);
    }
}