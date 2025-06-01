function solution(survey, choices) {
    let graph = {
        'R': 0,
        'T': 0,
        'C': 0,
        'F': 0,
        'J': 0,
        'M': 0,
        'A': 0,
        'N': 0,
    }
    let obj = {
        '1' : 3,
        '2' : 2,
        '3' : 1,
        '4' : 0,
        '5' : 1,
        '6' : 2,
        '7' : 3,
    }
    
    choices.forEach((num, idx)=>{
        let result = "";
    
        if(1<= num && num <=3){
            result = survey[idx][0];
        }else if(5<= num && num <=7){
            result = survey[idx][1];
        }
        graph[result] = graph[result] + obj[num.toString()];
    })
    let result = Object.entries(graph);
    let val = "";
    for(let i = 0; i<8; i+=2){
        if(result[i][1] > result[i+1][1]){
            val += result[i][0];
        }else if(result[i][1] < result[i+1][1]){
            val += result[i+1][0];
        }else{
            if(result[i][0].localeCompare(result[i+1][0])){
                val += result[i][0];
            }else{
                val += result[i+1][0];
            }
        }
    }
    return val;
    
    
}