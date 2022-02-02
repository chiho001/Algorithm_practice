#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

vector<int> vec_subin[100001];
bool visited[100001];
int fastest = 0;
int N,K;
int answer_count = 0;
int minTime = 0;

void bfs(int start)
{
    queue< pair<int,int> > q;
    q.push(make_pair(start,0));
    visited[start] = true;
    while(!q.empty())
    {
        int Line = q.front().first;
        int Time = q.front().second;

        // 똑같은 지점에 도달할 수 있는 방법이 여러개 존재 할 수 있으므로 pop한 이후 방문 여부 확인
        q.pop();
        visited[Line] = true;
        if(Line == K && answer_count && minTime == Time)
        {
            answer_count++;
        }
        // 처음으로 동생위치에 도착
        if(!answer_count && Line == K)
        {
            minTime = Time;
            answer_count++;
        }
        if(Line -1 >=0)
        {
            if(visited[Line -1]==false)
            {
                q.push(make_pair(Line-1,Time+1));
            }
        }
        if(Line+1<=100000)
        {
            if(visited[Line+1]==false)
            {
                q.push(make_pair(Line+1,Time+1));
            }
        }
        if(Line*2 <=100000)
        {
            if(visited[Line*2]==false)
            {
                q.push(make_pair(Line*2,Time+1));
            }
        }

    }
}

int main()
{

    cin >> N >> K;

    bfs(N);

    printf("%d\n",minTime);
    printf("%d\n",answer_count);

    return 0;
}