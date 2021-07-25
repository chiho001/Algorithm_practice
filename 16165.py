#테스트
N,M = map(int, input().split())

team_member, member_team = {}, {}

for i in range(N):
    team_name, member_num = input(), int(input())
    team_member[team_name] = []
    for j in range(member_num):
        name = input()
        team_member[team_name].append(name)
        member_team[name] = team_name
for i in range(M):
    name = input()
    zero_or_one = int(input())
    if zero_or_one:
        print(member_team[name])
    else :
        for k in sorted(team_member[name]):
           print(k)




