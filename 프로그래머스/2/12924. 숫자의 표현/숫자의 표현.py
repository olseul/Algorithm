def solution(n):
    # 초기 답변 변수를 0으로 설정
    answer = 0
    
    # 1부터 n까지의 모든 숫자에 대해 반복
    for i in range(1, n+1):
        sum = 0  # i부터 시작하는 연속된 숫자의 합을 저장하는 변수
        
        # i부터 n까지의 숫자에 대해 반복
        for j in range(i, n+1):
            sum += j  # j를 sum에 더함
            
            # sum이 n과 같다면, 가능한 연속된 숫자의 조합이므로 answer를 1 증가
            if sum == n:
                answer += 1
                break  # 이미 n에 도달했으므로 더 이상의 숫자를 더할 필요가 없음
            # sum이 n보다 크다면, 이후의 숫자를 더해도 n에 도달할 수 없으므로 반복을 종료
            elif sum > n:
                break
                
    # answer 반환
    return answer
