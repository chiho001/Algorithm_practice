
// 문제
// 방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
// 입력
// 첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. 
// (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. 
// (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.//
//입력
// 6 5
// 1 2
// 2 5
// 5 1
// 3 4
// 4 6
// 출력
// 2
//#pragma warning(disable:4996)

#include<vector>
#include<queue>
#include<string>
#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;
vector<int> ll_edge[1001];
bool visited[1001];
int cnt;


void bfs(int start,int N)
{
    queue<int>q;
    q.push(start);

    visited[start] = true;
	while (!q.empty()) 
    {
		int cur = q.front();
		q.pop();

		vector<int>::iterator it;
        for(it=ll_edge[cur].begin();it!=ll_edge[cur].end();it++)
        {
            int temp = *it;
			if (visited[temp] == false)
            {
				visited[temp] = true;
				q.push(temp);
			}
		}
	}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int M;
    int temp_start_point,temp_end_point;
     
    cin >> N;
    cin >> M;

    for(int i=0;i<M;i++)
    {
        cin >> temp_start_point;
        cin >> temp_end_point;
        ll_edge[temp_start_point].push_back(temp_end_point);
        ll_edge[temp_end_point].push_back(temp_start_point);

    }

    for(int i=1;i<=N;i++)
    {
        if(visited[i]!=true)
        {
            cnt++;
            bfs(i,N);
        }
    }

    cout << cnt;
  


    return 0;
}
