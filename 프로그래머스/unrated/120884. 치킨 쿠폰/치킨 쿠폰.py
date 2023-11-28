def solution(chicken):
    service = 0
    # 치킨 시키면 108개 서비스 -> 108개 쿠폰, 1개의 쿠폰이 남음 총 109개의 쿠폰
    # 치킨 시키면 10개 서비스 -> 10개의 쿠폰, 9개의 쿠폰이 남음 총 19개의 쿠폰
    # 치킨 시키면 1개 서비스 -> 1개의 쿠폰, 9개의 쿠폰이 남음 총 10개의 쿠폰
    # 치킨 시키면 1개 서비스 -> 1개의 쿠폰이 남음
    while True:
        service += chicken // 10 # 받은 서비스의 치킨 수
        coupon = chicken // 10 + chicken % 10 # 현재 가지고 있는 쿠폰 수
        if coupon < 10: break;
        chicken = coupon    
    return service