function solution(picture, k) {
    let result = [];
    for(let i = 0; i < picture.length; i++){
        let width = "";
        for(let j = 0; j < picture[i].length; j++){
            for(let n = 0; n < k; n++){
                width += picture[i][j];
            }
        }
        for(let j = 0; j < k; j++){
            result.push(width);
        }
    }
    return result;
}