def solution(numbers):
    answer = set() # 중복을 허용하지 않는 set 자료형 사용
    
    # 모든 수의 조합에 대해 합을 구하고 set에 추가
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            answer.add(numbers[i] + numbers[j])
    
    return sorted(list(answer))
