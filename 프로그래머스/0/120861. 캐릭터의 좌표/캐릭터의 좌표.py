def solution(keyinput, board):
    # 시작 위치 설정
    x, y = 0, 0
    # 맵의 중앙값을 구함
    mid_x, mid_y = board[0] // 2, board[1] // 2

    # 방향에 따른 x, y 변화량 정의
    directions = {
        "up": (0, 1),
        "down": (0, -1),
        "left": (-1, 0),
        "right": (1, 0)
    }

    # 키 입력을 순회하며 이동
    for key in keyinput:
        dx, dy = directions[key]
        # 새로운 x, y 좌표 계산
        new_x, new_y = x + dx, y + dy
        
        # 새로운 좌표가 맵 범위 내에 있으면 x, y 갱신
        if -mid_x <= new_x <= mid_x and -mid_y <= new_y <= mid_y:
            x, y = new_x, new_y

    return [x, y]
