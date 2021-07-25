#THE CANDY WAR

def check(N,candy) :
    for i in range(N):
        if candy[i] % 2 ==1:
            candy[i] += 1
    return len(set(candy))==1

def teacher(N,candy):
    for i in range(N):
        if candy[i] % 2:
            candy[i] +=1
        if i == N-1:
            candy[i] = candy[i] // 2
            candy[0] += candy[i] // 2
        else:
            candy[i] = candy[i] // 2
            candy[i+1] += candy[i] // 2
    return candy
    

def process():
    N, candy = int(input()), list(map(int, input().split()))
    cnt = 0
    while not check(N,candy):
        cnt +=1
        candy = teacher(N,candy)
    print(cnt)

T = int(input()) # 테스트케이스 개수

for i in range(T):
    process()
