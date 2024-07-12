function solution(str_list) {
    var answer = [];
    l_idx = str_list.indexOf("l");
    r_idx = str_list.indexOf("r");
    
    if(l_idx == -1){
        l_idx = 200;
    }if(r_idx == -1){
        console.log(r_idx)
        r_idx = 200;
    }
    
    console.log(`${r_idx} ${l_idx}`);
    if(l_idx < r_idx){
        console.log("여기 오니?")
        answer = str_list.slice(0, l_idx);
    }else if(l_idx > r_idx){
        answer = str_list.slice(r_idx + 1);
    }
    else if(l_idx == 200 && r_idx == 200){
        answer = [];
    }
    return answer;
}