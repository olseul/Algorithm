def solution(n, lost, reserve):
    # 여벌 체육복을 가져온 학생이 체육복을 도난당할 수 있음. 그러면 중복 제거를 해줘야함
    # list에서는 중복을 제거하는 - 가 적용이 안되므로 set을 이용하기
    reserve_uniq = set(reserve) - set(lost) 
    lost_uniq = set(lost) - set(reserve)

    for i in reserve_uniq : # 여벌이 있는 사람들
        if i-1 in lost_uniq : # 앞 사람이 도난당했으면 빌려줌
            lost_uniq.remove(i-1)
        elif i+1 in lost_uniq : # 뒷 사람이 도난당했으면 빌려줌
            lost_uniq.remove(i+1)
        
    return n - len(lost_uniq) # 전체 학생 수 - 체육복을 못빌린 사람 = 체육복이 있는 사람