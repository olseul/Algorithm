function solution(name, yearning, photo) {
    // 키 : 값(이름 : 그리움점수) 객체로 값 채우기
    // photo를 돌면서, 해당 키에 대한 값 더해서 map으로 해당 배열에 할당하기
    // 만약 언디파인이면 그냥 넘어가기
    
    let score = {}
    for(let i = 0; i<name.length; i++){
        score[name[i]] = yearning[i];
    }
    
    return photo.map((arr, idx)=>{
        let sum = 0;
        for(const names of arr){
            if(score[names] == undefined){
                continue;
            }
            sum += score[names];
        }
        return sum;
    })
}