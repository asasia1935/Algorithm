from queue import PriorityQueue
import sys

N = int(sys.stdin.readline())
priQue = PriorityQueue()

for j in range(N):
    listA = list(map(int, sys.stdin.readline().split()))
    for num in listA:
        priQue.put(num)
        if j > 0:
            k = priQue.get()
            priQue.put(k)
            if num > k:
                priQue.get()
                continue

for _ in range(N - 1):
    priQue.get()

print(priQue.get())
