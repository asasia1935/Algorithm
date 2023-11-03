N = int(input())  # N값을 입력받기

for i in range(1, N + 1):  # 1부터 N까지 반복
    i = str(i)  # 숫자를 문자로 변환
    clap = i.count("3") + i.count("6") + i.count("9")  # 해당 숫자에 포함된 3, 6, 9의 개수가 몇개인지 확인
    if clap == 0:  # 없을 경우 바로 숫자로 출력
        print(i, end=" ")
    else:  # 있을 경우 해당 개수만큼 -를 출력
        print(clap * "-", end=" ")
