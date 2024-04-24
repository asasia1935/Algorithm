N = int(input())  # N값 받기
listN = []  # 문자열 받기 위한 리스트 초기화

for i in range(N):
    listN.append(input())  # 리스트에 줄마다 값 추가

listN = list(set(listN))  # 셋 함수를 이용하여 중복 제거한 후에 리스트화
listN.sort()  # 알파벳 기준으로 먼저 정렬
listN.sort(key=len)  # 문자열 길이를 기준으로 정렬

for i in range(len(listN)):
    print(listN[i])  # 리스트 출력
