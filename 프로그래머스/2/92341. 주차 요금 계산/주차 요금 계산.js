function solution(fees, records) {
    let record = records.map(a => {
        let [time, num, state] = a.split(' ');
        let [hour, minute] = time.split(':').map(Number);
        
        let total = hour*60 + minute;
        return [total, num, state];
    }).sort((a, b) => +a[1] - +b[1]);
    
    let map = new Map();
    let total = new Map(); // 누적 주차시간 (차량번호, 누적시간)  
    
    record.forEach(([time, num, state]) => {
        if(state == "IN"){
            map.set(num, time); // 차량번호, 시간
        }else if(state == "OUT"){ // 그럼 출차시간을 가져옴
            total.set(num, (total.get(num) || 0) + (time - map.get(num)));
            map.delete(num)
        }
    })
    for(let [key, value] of map){
        total.set(key, (total.get(key) || 0) + (23*60 + 59 - map.get(key)));
        map.delete(key)
    }
    
    let sorted = [...total.entries()].sort((a, b) => a[0].localeCompare(b[0]));
    
    
    let result = [];
    for(let [key, value] of sorted){
        if(value <= fees[0]){
            result.push(fees[1]);
        }else if(value > fees[0]){
            result.push(fees[1] + Math.ceil((value - fees[0])/fees[2]) * fees[3]);
        }
    }
    return result
}