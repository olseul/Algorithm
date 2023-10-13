def solution(s):
    stack = []  # 스택을 사용하여 문자들을 저장

    for char in s:
        # 스택이 비어있지 않고, 스택의 top 문자와 현재 문자가 같으면 pop
        if stack and stack[-1] == char:
            stack.pop()
        # 그렇지 않으면 현재 문자를 push
        else:
            stack.append(char)

    # 모든 문자를 처리한 후 스택이 비어있으면 모든 문자가 짝지어 제거된 것이므로 1 반환
    if not stack:
        return 1
    # 그렇지 않으면 0 반환
    return 0
