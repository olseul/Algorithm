function solution(id_list, report, k) {
    let reportMap = new Map();
    let count = new Map();
    id_list.map(a =>{
        reportMap.set(a, [])
    })
    id_list.map(a =>{
        count.set(a, 0);
    })
    
    let reports = [...new Set(report)];
    
    reports.forEach((val)=>{
        let [start, end] = val.split(' ');
        reportMap.get(start).push(end);
    })
    
     reports.forEach((val)=>{
        let [start, end] = val.split(' ');
        count.set(end, count.get(end)+1);
    })
    
    const stop = new Set(
        [...count].filter(([_, count]) => count >= k).map(([id]) => id)
    )
    
    const result = id_list.map(a=>{
        return reportMap.get(a).filter(reported => stop.has(reported)).length;
    })
    
    return result;
      
}