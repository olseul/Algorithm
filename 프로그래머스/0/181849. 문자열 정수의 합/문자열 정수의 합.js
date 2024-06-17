function solution(num_str) {
    sum = 0;
  for (let el of num_str){
    sum += +el;
  }
    return sum;
}