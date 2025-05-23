function solution(my_string, queries) {
    queries.forEach(([s,e]) => {
        let a = my_string.slice(0, s);
        let b = my_string.slice(s, e+1).split('').reverse().join('');
        let c = my_string.slice(e+1);
        my_string = a+b+c;
    })
    return my_string;
}