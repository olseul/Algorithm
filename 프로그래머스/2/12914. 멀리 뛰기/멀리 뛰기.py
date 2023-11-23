def solution(n):
    dp = [1, 1]

    # 2부터 n까지 각 위치에 도달하는 방법의 수 계산
    for i in range(2, n + 1):
        dp.append((dp[i - 1] + dp[i - 2]) % 1234567)

    # n번째 위치에 도달하는 방법의 수 반환
    return dp[n]