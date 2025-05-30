function solution(book_time) {
    let arr = book_time.map(([a,b])=>{
        let start = a.split(':').map(Number);
        let end = b.split(':').map(Number);
        
        return [start[0]*60 + start[1], end[0]*60+end[1]+10];
    }).sort((a,b) => a[0] - b[0]);
    
    console.log(arr)
    
    let room = [];
    
    arr.forEach(([a,b],idx)=>{
        if(room.length == 0){
            room.push(b);
        }else{
            let exist = false;
            for(const index in room){
                if(room[index] <= a){
                    room[index] = b; 
                    exist = true;
                     break; 
                }
            }
            if(!exist){
                room.push(b);
            }
        }
    })
    
    return room.length;
    
    

}