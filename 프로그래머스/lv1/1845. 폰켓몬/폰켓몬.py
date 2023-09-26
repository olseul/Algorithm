def solution(nums):
    types = len(set(nums)) # 폰켓몬의 종류(중복 없이) 예를 들어 3,1,2,3 이면 1,2,3 3종류

    if len(nums) / 2 > types: # 폰켓몬의 종류보다 선택하려고 하는 폰켓몬이 많은 경우? -> 많아봤자 최대 종류만큼 선택할 수 있으므로 종류를 출력
        return types
    else:
        return len(nums) / 2 # 폰켓몬의 종류가 더 많은 경우는 선택할려고 하는 종류만큼 선택