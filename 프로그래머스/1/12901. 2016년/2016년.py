def solution(a, b):
    month = [31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31]
    day = ['FRI', 'SAT','SUN','MON','TUE','WED','THU']
    answer = 0
    
    for i in range(a-1):
        answer += month[i]
    answer += b
    return day[answer%7-1]