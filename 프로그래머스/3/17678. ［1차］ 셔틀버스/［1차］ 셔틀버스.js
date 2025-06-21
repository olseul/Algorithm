function solution(n, t, m, timetable) {
    let arr = timetable.map(a=>{
        const [hour, minutes] = a.split(':').map(Number);
        return hour*60 + minutes;
    }).sort((a,b) => a-b);
    
    let answer;
    let time = 540; // 일단 지금은 9시
    for(let i=0; i<n; i++){
        let cnt = 0;
        let result = [];
        while (cnt < m && arr.length > 0 && arr[0] <= time) {
            result.push(arr.shift());
            cnt++;
        }
        if(i == n-1){
            if(result.length == m){
                answer = Math.max(...result) - 1;
            }else if(result.length < m){
                answer = time;
            }
        }
        result = [];
        time = time + t;
    
    }
    
     const hh = String(Math.floor(answer / 60)).padStart(2, '0');
    const mm = String(answer % 60).padStart(2, '0');
    return `${hh}:${mm}`;
}