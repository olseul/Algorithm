function solution(s) {
    let dic = {};
    for(let i = 0; i<s.length; i++){
        if(dic[s[i]] == undefined){
            dic[s[i]] = 0;
        }
        dic[s[i]] += 1;
    }
    
    let str = "";
    for(let key in dic) {
        if(dic[key] == 1){
            str += key;
        }
    }
    
    return str.split('').sort().join('');
}