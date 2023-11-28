def solution(numbers, k):
    index = 0  # 시작 인덱스 초기화
    for _ in range(k - 1):  # k - 1번 반복 (첫 번째 던짐은 이미 1번에서 시작)
        index = (index + 2) % len(numbers)  # 두 칸씩 이동하며 순환
    return numbers[index]  # k번째로 공을 받는 사람의 번호 반환
