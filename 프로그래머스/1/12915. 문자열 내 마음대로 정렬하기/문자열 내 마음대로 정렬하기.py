def solution(strings, n):
    # lambda x: (x[n], x)의 의미는 첫 번째 정렬 기준을 x[n]으로, 두 번째 정렬 기준을 x 전체로 한다는 것
    return sorted(strings, key=lambda x: (x[n], x))