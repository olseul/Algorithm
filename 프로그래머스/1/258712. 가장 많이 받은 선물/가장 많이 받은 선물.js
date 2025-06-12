function solution(friends, gifts) {
    let len = friends.length
    let arr = Array.from({length : len },()=> new Array(len).fill(0))

    gifts.forEach((val, idx)=>{
        let [give, rec] = val.split(' ');
        arr[friends.indexOf(give)][friends.indexOf(rec)] += 1;
    })
    
    let obj = {};
    friends.forEach(a=>{
        obj[a] = (obj[a] || [0,0,0]);
    })
    
    // 준 선물 구하기
    arr.forEach((a, idx)=>{
        let sum = a.reduce((acc,cur)=>{
           return acc + cur 
        },0)
        obj[friends[idx]][0] += sum; 
    })
    
    // 받은 선물 구하기
    for(let i=0; i<len; i++){
        let sum =0;
        for(let j=0; j<len; j++){
            sum += arr[j][i]; 
        }
        obj[friends[i]][1] += sum; 
    }
    
    for(let key in obj){
        obj[key][2] =  obj[key][0] - obj[key][1];
    }
    
    let result = new Array(len).fill(0);
    for(let i=0; i<len; i++){
        for(let j=i+1; j<len; j++){
            if(arr[i][j] > arr[j][i] ){
                result[i] += 1;
            }else if(arr[i][j] < arr[j][i]){
                result[j] += 1;
            }else{
                if(obj[friends[i]][2] < obj[friends[j]][2]){
                    result[j] += 1;
                }else if(obj[friends[i]][2] > obj[friends[j]][2]){
                    result[i] += 1;
                }
            }
        }
    }
    
    console.log(result)
    
    
    console.log(obj)
    
    console.log(arr)
    return Math.max(...result);
    
}