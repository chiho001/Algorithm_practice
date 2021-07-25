# 정렬 등 기본 구현문제#
N, M = map(int, input().split())
A, B = input().split()

alp = [3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1,
       3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]

AB = []
min_value = min(N, M)
sum = N+M
for i in range(min_value):
    AB += A[i]+B[i]

AB += A[min_value:] + B[min_value:]
lst = []
for i in range(N+M):
    lst += [alp[ord(AB[i])-ord('A')]]


for j in range(N+M-2):
    for i in range(N+M-1-j):
        lst[i] = lst[i]+lst[i+1]
        if lst[i] > 10:
            lst[i] = lst[i]-10
        elif lst[i] == 10:
            lst[i] = 0

value = lst[0]*10+lst[1]

print(str(value)+'%')
