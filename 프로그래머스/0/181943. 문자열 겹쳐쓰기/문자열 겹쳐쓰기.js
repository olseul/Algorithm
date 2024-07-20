function solution(my_string, overwrite_string, s) {
    let new_str = my_string.slice(0,s);
    new_str += overwrite_string;
    new_str += my_string.slice(s + overwrite_string.length);
    return new_str;
}