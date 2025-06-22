function getPermutations(arr, selectNum) {
  if (selectNum === 1) return arr.map(v => [v]);

  const result = [];
  arr.forEach(v => {
    const rest = getPermutations(arr, selectNum - 1);
    const attached = rest.map(r => [v, ...r]);
    result.push(...attached);
  });
  return result;
}


function solution(users, emoticons) {
    let per = [10, 20, 30, 40];
    let all = getPermutations(per, emoticons.length);
    
    let result = [];
    for(let dis of all){
        let plus = 0;
        let buy = 0;
        users.forEach(([stand, price])=>{
            let sum = 0;
            dis.forEach((candi,idx)=>{
                if(candi >= stand){
                    sum += emoticons[idx] * (1 - candi * 0.01); 
                }
            })
            if(sum >= price){
                plus += 1;
            }else{
                buy += sum;
            }
        })
        result.push([plus, buy]);
    }
    return result.sort((a,b)=> b[0]-a[0] || b[1] - a[1])[0];
}