function solution(arr) {
    let skt = [];
    i = 0;
    while(i < arr.length){
        if(skt.length == 0){
            skt.push(arr[i])
            i+=1;
        }
        else if(skt.length !== 0 && skt[skt.length - 1] == arr[i]){
            skt.splice(skt.length - 1);
            i+=1;
        }
        else if(skt.length !== 0 && skt[skt.length - 1] !== arr[i]){
            skt.push(arr[i]);
            i+=1;
        }
    }
    if(skt.length == 0){
        return [-1];
    }
    return skt;
}