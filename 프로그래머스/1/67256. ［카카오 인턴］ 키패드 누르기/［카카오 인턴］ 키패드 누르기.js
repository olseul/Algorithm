function solution(numbers, hand) {
    let map = {
        '1' : [0,0],
        '2' : [0,1],
        '3' :[0,2],
        '4': [1,0],
        '5': [1,1],
        '6': [1,2],
        '7': [2,0],
        '8': [2,1],
        '9': [2,2],
        '*': [3,0],
        '0': [3,1],
        '#': [3,2],
    }
    
    let Lhand = '*';
    let Rhand = '#';
    
    let result = ""
    for(let val of numbers){
        if(val == 1 || val == 4 || val == 7){
            Lhand = val.toString();
            result += "L";
        }else if(val == 3 || val == 6 || val == 9){
            Rhand = val.toString();
            result += "R";
        }else{
            let ldir = Math.abs(map[val][0] - map[Lhand][0]) + Math.abs(map[val][1] - map[Lhand][1]);
            let rdir = Math.abs(map[val][0] - map[Rhand][0]) + Math.abs(map[val][1] - map[Rhand][1]);
            console.log(ldir, rdir)
            if(ldir < rdir){
                Lhand = val.toString();
                result += "L";
            }else if(ldir > rdir){
                Rhand = val.toString();
                result += "R";
            }else{
                if(hand == 'right'){
                    Rhand = val.toString();
                    result += 'R';
                }else{
                    Lhand = val.toString();
                    result += 'L';
                }
            }
        }
    }
    return result;
    
}