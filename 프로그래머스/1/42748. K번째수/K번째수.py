def solution(array, commands):
    answer = []
    
    for i in commands:
        ary = array[i[0]-1: i[1]]    # 주어진 크기만큼 자르기 i[0]=i i[1]=j i[2]=k
        ary.sort()    # sort 함수로 정렬
        answer.append(ary[i[2]-1])    # k 번째 값 집어넣기
        
    return answer