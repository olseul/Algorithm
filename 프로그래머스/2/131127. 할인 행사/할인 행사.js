function solution(want, number, discount) {
    let map = new Map();
    want.forEach((a,idx)=>{
        map.set(a, number[idx]);
    })
    
    let cnt = 0;
    for(let i=0; i<=discount.length -10; i++){
        let ten = new Map();
        let arr = discount.slice(i, i+10);
        arr.forEach((a, idx)=>{
            ten.set(a, (ten.get(a) || 0) + 1);
        })

        let eq = true;
        for(let [key, value] of ten){
            if(map.get(key) !== value){
                eq = false;
                break;
            }
        }
        if(eq){
            cnt += 1;
        }
        ten.clear()
    }
    return cnt;
}