def solution(number):
    answer = 0 
    le = len(number)
    for i in range(le):
        for j in range(i+1, le):
            for k in range(j+1, le):
                if number[i] + number[j] + number[k] == 0:
                    answer += 1
    return answer