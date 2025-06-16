function solution(genres, plays) {
    let map = new Map();
    
    genres.forEach((a,idx)=>{
        map.set(a, (map.get(a) || 0) + plays[idx])
    })
    
    let arr= [...map].sort((a,b)=>b[1]-a[1]);
    
    let result = [];
    arr.forEach((a,idx)=>{
        let play = [];
        genres.forEach((b,idx)=>{
            if(a[0]==b){
                play.push([plays[idx], idx]);
            }
        })
        let sorted = play.sort((a,b)=>b[0] - a[0]).map(a=>a[1]);
        result.push(sorted)
    })
    return result.map(a=>{
        return a.slice(0,2);
    }).flat()
}