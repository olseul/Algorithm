def solution(left, right):
    answer = 0
    for i in range(left, right + 1): # left부터 right까지 포문
        cnt = 0 # 약수의 개수를 셀 변수
        for j in range(1, i + 1): 
            if i % j == 0: # 약수인 지 판별
                cnt += 1 # 변수 증가
        if cnt % 2 == 0: # 약수의 개수가 짝수
            answer += i
        else:
            answer -= i #약수의 개수가 홀 수 
    return answer