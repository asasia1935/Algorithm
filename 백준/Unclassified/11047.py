N, K = map(int, input().split())
listCoin = []  # 동전 종류를 담을 리스트 선언
coinN = 0  # 동전의 개수를 담을 변수
coinQ = 0  # 가장 큰 동전으로 나눈 몫

for n in range(N):
    listCoin.append(int(input()))

listCoin.sort(reverse=True)  # 동전 종류를 내림차순으로 정렬

for coin in listCoin:  # 동전 별로 확인
    if coin > K:  # 동전보다 작은 값일 경우 무시
        continue
    coinQ = K // coin  # 해당 동전으로 나올 수 있는 값
    coinN += coinQ  # 그만큼의 개수를 더함
    K %= coin  # 동전으로 바꾼 금액의 값을 빼기 (동전만큼 절삭)

print(coinN)
