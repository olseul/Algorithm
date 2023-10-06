def solution(s):
    c = int(len(s)/2)
    if len(s) % 2 == 0: # 짝수라면
        return s[c-1:c+1] 
    else:
        return s[c]