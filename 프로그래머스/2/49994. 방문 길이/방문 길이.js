function solution(dirs) {
    let coordinate = {
        'U' : [1,0],
        'D' : [-1,0],
        'R' : [0,1],
        'L' : [0,-1],
    }
    
    let now = [5,5];
    let come = new Set();
    let dis =0;
    dirs.split('').forEach(a=>{
        let [y,x] = coordinate[a];
        let dy = now[0] + y;
        let dx = now[1] + x;
        
        if(dy >= 0 && dy <= 10 && dx >= 0 && dx <= 10) {
            if(!come.has(`${now[0]},${now[1]} - ${dy},${dx}`) && !come.has(`${dy},${dx} - ${now[0]},${now[1]}`)){
                come.add(`${now[0]},${now[1]} - ${dy},${dx}`);
                come.add(`${dy},${dx} - ${now[0]},${now[1]}`);
                dis += 1;
             }
            now[0] = dy;
            now[1] = dx;
        }
    })
    return dis
}