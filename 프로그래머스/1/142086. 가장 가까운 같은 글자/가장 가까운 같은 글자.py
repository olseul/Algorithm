def solution(s):
    answer = []
    dict = {}  # 딕셔너리 
    
    for index, word in enumerate(s):    #인덱스와 값을 동시에 얻음
        if word not in dict:#딕셔너리에 word값이 없다면
            answer.append(-1)#처음 나온 숫자이므로 -1삽입
            dict[word] = index#키와 값을 삽입
    
        else:
            answer.append(index - dict[word])#현재 index - dict에 있는 이전 값의 인덱스
            dict[word] = index#앞에있는 문자와의 차이
    #딕셔너리는 키와 값을 가지므로 이전 값을 저장해놓고 다음에 이 값에 접근할 때 딕셔너리를 이용하기 좋은 듯하다,,
    # 키와 값을 모두 사용하므로 인덱스와 값에 모두 접근하는 enumerate와 딕셔너리를 같이 연관지어서 외워야겠담
    return answer