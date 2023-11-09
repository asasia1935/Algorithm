import sys


def find(parent, node):
    if parent[node] == node:
        return node
    return find(parent, parent[node])


def union(parent, node1, node2):
    node1 = find(parent, node1)
    node2 = find(parent, node2)
    if node1 > node2:
        parent[node1] = node2
    else:
        parent[node2] = node1


def kruskal(listE):
    parent = [i for i in range(0, len(listE) + 1)]
    minimum_spanning_tree = 0
    for edge in listE:
        node1 = edge[0]
        node2 = edge[1]
        weight = edge[2]
        if find(parent, node1) != find(parent, node2):
            union(parent, node1, node2)
            minimum_spanning_tree += weight
    return minimum_spanning_tree


V, E = map(int, sys.stdin.readline().split())

listE = []

for _ in range(E):
    A, B, C = map(int, sys.stdin.readline().split())
    listE.append((A, B, C))

listE.sort(key=lambda x: x[2])

print(kruskal(listE))
