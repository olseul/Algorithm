function solution(today, terms, privacies) {
    let [year, month, day] = today.split('.');
    let todayday = +year*12*28 + +month*28 + +day;

    const period = {}
    terms.forEach((a)=>{
        let [type, ex] = a.split(' ');
        period[type] = +ex * 28;
    })

    let result = [];
    privacies.forEach((a, idx)=>{
        let [date ,type] = a.split(' ');
        let [year, month, day] = date.split('.');
        let total = +year*12*28 + +month*28 + +day - 1;
        
        total += period[type];
        
        if(total < todayday){
            result.push(idx+1);
        }
    })
    return result;
}