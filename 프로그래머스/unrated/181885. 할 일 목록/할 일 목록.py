def solution(todo_list, finished):
    answer = []
    for idx, is_finished in enumerate(finished):
        if not is_finished:  # 만약 해당 일을 아직 마치지 못했다면
            answer.append(todo_list[idx])  # answer에 추가
    return answer
