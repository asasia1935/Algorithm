import sys

T = int(sys.stdin.readline())
for test in range(T):
    N, M = map(int, sys.stdin.readline().split())
    for m in range(M):
        u, v = map(int, sys.stdin.readline().split())
    print(N - 1)
