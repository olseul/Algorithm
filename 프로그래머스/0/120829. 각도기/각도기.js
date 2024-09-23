function solution(angle) {
    let result = 0;
    if(angle == 180){
        result = 4;
    }else if(90 < angle && angle < 180){
        result = 3;
    }else if(angle == 90){
        result = 2;
    }else if(0 < angle && angle < 90){
        result = 1;
    }
    return result;
}