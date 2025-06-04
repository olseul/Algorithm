// 소문자인지 확인하는 함수 작성
function isLowerCase(str) {
  return str === str.toLowerCase();
}

function isRull(str) {
   let len = str.length;
    if (len < 3 || len > 15) return false;
    
    for(let i = 0; i<len; i++){
        let a = str[i];
        if(isLowerCase(a) || isNaN(a) || a == '-' || a=='_' || a==
          '.'){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

function solution(new_id) {
    new_id = new_id.toLowerCase();
    new_id = [...new_id].filter(a=>{
         return (
            (a >= 'a' && a <= 'z') ||         // 소문자
            (a >= '0' && a <= '9') ||         // 숫자
            a === '-' || a === '_' || a === '.' // 허용 특수문자
          );
    }).join('')
    while (new_id.includes("..")) {
      new_id = new_id.replace("..", ".");
    }
    if(new_id.startsWith('.')){
        new_id = new_id.slice(1);
    }
    if(new_id.endsWith('.')){
        new_id = new_id.slice(0, -1);
    }
    if(new_id == ""){
        new_id+="a";
    }
    if(new_id.length >= 16){
        new_id = new_id.slice(0, 15);
        
        if(new_id.endsWith('.')){
            new_id = new_id.slice(0, -1);
        }
    }else if(new_id.length <= 2){
        new_id = new_id.padEnd(3, new_id[new_id.length - 1]);;
    }
    return new_id

}