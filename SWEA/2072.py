T = int(input())  # 테스트 케이스 수를 입력받기

for test_case in range(1, T + 1):
    li = map(int, input().split())
    sums = 0
    for li1 in li:
        if li1 % 2 == 1:
            sums += li1
    print("#" + str(test_case), str(sums))
