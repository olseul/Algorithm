def solution(s):
    stack = []
    for i in s:
        if i == '(':  # '('는 stack에 추가
            stack.append(i)
        else:  # i == ')'인 경우
            if stack == []:  # 짝을 이룰 '('가 없을 경우
                return False 
            else:
                stack.pop()  # 짝을 이룰 '('가 있는 경우 '('를 제거
    
    if stack == []: # 만약 스택에 모두가 짝을 이뤄서 아무 값도 없다면 true리턴
        return True
    return False