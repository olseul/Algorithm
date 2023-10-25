def solution(k, m, score): # 사과 최대 점수, 한 상자 사과 개수, 사과 점수
    answer = 0 # 이익
    score.sort(reverse=True)
    for i in range(0, len(score), m):
        if len(score[i:i+m]) == m:
            answer += min(score[i:i+m]) * m
    return answer