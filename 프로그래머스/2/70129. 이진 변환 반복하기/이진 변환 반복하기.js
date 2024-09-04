function binary(n){
    let str = "";
    while(true){
        if(n == 1){
            str = "1" + str;
            break;
        }
        str = String(n % 2) + str;
        n = Math.floor(n / 2);
    }    
    return str;
}

function solution(s) {
    let zero = 0;
    let cnt = 0;
    while(s !== "1"){
        let onecnt = s.split('1').length - 1;
        zero += s.length - onecnt;

        s = binary(onecnt);   
        cnt += 1;
    }
    return [cnt, zero];
}