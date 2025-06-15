function solution(record) {
    let name = {};
    let arr = [];
    record.forEach(a=>{
        let [state, userid, username] = a.split(' ');
        if (username) name[userid] = username; 
        if(state !== "Change"){
             arr.push([state, userid]);
        }
    })
    let result = [];
    arr.forEach(a=>{
        if(a[0] == 'Enter'){
            result.push(`${name[a[1]]}님이 들어왔습니다.`)
        }
        else if(a[0] == 'Leave'){
            result.push(`${name[a[1]]}님이 나갔습니다.`)
        }
    })
    return result;
}