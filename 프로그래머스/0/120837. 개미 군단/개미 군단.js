function solution(hp) {
    let attak = [5,3,1];
    let result = Math.floor(hp / attak[0]);
    hp = Math.floor(hp % attak[0]);
    result += Math.floor(hp / attak[1]);
    hp = Math.floor(hp % attak[1]);
    result += Math.floor(hp / attak[2]);
    hp = Math.floor(hp % attak[2]);
    
    return result;
}