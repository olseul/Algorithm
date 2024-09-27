function solution(babbling) {
    const pro = ["aya", "ye", "woo", "ma"];
    let cnt = 0;
    
    for (let i = 0; i < babbling.length; i++) {
        let currentWord = babbling[i];
        let isValid = true;
        
        // 연속된 발음이 있는지 먼저 확인
        for (let j = 0; j < pro.length; j++) {
            if (currentWord.includes(pro[j].repeat(2))) {
                isValid = false;
                break;
            }
        }
        
        if (!isValid) continue;  // 연속된 발음이 있으면 다음 단어로 넘어감
        
        // 발음을 하나씩 제거
        for (let j = 0; j < pro.length; j++) {
            currentWord = currentWord.split(pro[j]).join(" ");
        }
        
        // 발음을 모두 제거하고 남은 문자가 없으면 발음 가능
        if (currentWord.trim() === "") {
            cnt += 1;
        }
    }
    
    return cnt;
}
