function solution(players, callings) {
    let dic = {};
    players.forEach((player, index) => {
        dic[player] = index;
    })
    
    callings.forEach((calling)=>{
        const current = dic[calling];
        const previous = current - 1;
        
        if(previous >= 0){
            const name = players[previous];
            
            dic[calling] = previous;
            dic[name] = current;
            
            [players[current], players[previous]] = [players[previous], players[current]]; 
        }
    })
    return players;
}