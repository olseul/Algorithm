# 음양 더하기
def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        # 참 -> 양수이므로 덧셈
        if signs[i]:
            answer += absolutes[i]
        # 거짓 -> 음수이므로 빼기
        else:
            answer -= absolutes[i]
    return answer