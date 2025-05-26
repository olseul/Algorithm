function solution(my_string, indices) {
    return my_string.split('').filter((a, idx)=>!indices.includes(idx)).join('')
}