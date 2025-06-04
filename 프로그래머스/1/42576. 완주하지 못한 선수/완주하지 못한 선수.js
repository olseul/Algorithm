function solution(participant, completion) {
    let map = new Map();
    participant.forEach(a=>{
        map.set(a, (map.get(a) || 0) + 1);
    })
    
    completion.forEach(a=>{
        map.set(a, map.get(a) -1 )
    })
    
    for(let [key, val] of map){
        if(val == 1){
            return key;
        }
    }
}