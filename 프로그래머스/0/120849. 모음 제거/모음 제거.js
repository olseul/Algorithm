function solution(my_string) {
    return my_string.split("").filter((a) => (a !== 'a' && a !== 'e' && a !== 'i' && a !== 'o' && a !== 'u')).join("");
}