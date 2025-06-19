function solution(files) {
    return files.map(a=>{
        let arr = a.split('')
        let idx;
        let HEAD;
        let NUMBER;
        let TAIL;
        for(let i=0; i<arr.length; i++){
            if (arr[i] >= '0' && arr[i] <= '9') {
                HEAD = arr.slice(0, i).join('');
                idx = i;
                break;
            }
        }
        for(let i=idx; i<arr.length; i++){
            if(isNaN(arr[i])){
                NUMBER = arr.slice(idx, i).join('');
                idx = i;
                break;
            }
            
            if (i === arr.length - 1) {
              NUMBER = arr.slice(idx).join('');
              idx = arr.length;
            }
        }
        TAIL = arr.slice(idx).join('');
        return [HEAD, NUMBER, TAIL]
    }).sort((a,b) => (a[0].toUpperCase()).localeCompare(b[0].toUpperCase()) || Number(a[1]) - Number(b[1])).map(a=>{
        return a.join('');
    })
}