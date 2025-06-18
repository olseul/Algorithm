function solution(phone_book) {
    phone_book.sort(); // 사전순 정렬로도 접두어 관계 정렬 가능

    for (let i = 0; i < phone_book.length - 1; i++) {
        if (phone_book[i + 1].startsWith(phone_book[i])) {
            return false;
        }
    }
    return true;
}
