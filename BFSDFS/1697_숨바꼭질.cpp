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

int bfs(int start)
{
    queue< pair<int,int> > q;
    q.push(make_pair(start,0));
    visited[start] = true;
    while(!q.empty())
    {
        int Line = q.front().first;
        int Time = q.front().second;

        //printf("%d",front);
        q.pop();
        if(Line == K)
        {
            return Time;
        }
        
        if(Line -1 >=0)
        {
            if(visited[Line -1]==false)
            {
                q.push(make_pair(Line-1,Time+1));
                visited[Line -1] = true;
            }
        }
        if(Line+1<=100000)
        {
            if(visited[Line+1]==false)
            {
                q.push(make_pair(Line+1,Time+1));
                visited[Line+1] = true;
            }
        }

    
    
        if(Line*2 <=100000)
        {
            if(visited[Line*2]==false)
            {
                q.push(make_pair(Line*2,Time+1));
                visited[Line*2] = true;
            }
        }

    }
}

int main()
{

    cin >> N >> K;

    cout << bfs(N) << endl;


    return 0;
}