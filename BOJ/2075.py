import heapq, sys

N = int(sys.stdin.readlines())

priQue = []

for i in range(N):
    nums = list(map(int, sys.stdin.readlines().split()))
    if i == 0:
        for num in nums:
            heapq.heappush(priQue, num)
    else:
        for num in nums:
            if num > priQue[0]:
                heapq.heappop(priQue)
                heapq.heappush(priQue, num)

print(heapq.heappop(priQue))
