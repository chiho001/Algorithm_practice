#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>
//그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오.
//단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고,
//더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.

//입력
// 첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다.
// 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다.
// 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.

//출력
//첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.

//예제 입력
// 4 5 1
// 1 2
// 1 3
// 1 4
// 2 4
// 3 4

//예제 출력
// 1 2 4 3
// 1 2 3 4
using namespace std;
vector<int> vec_array[1001];
bool visited[1001];
int node_index;

void dfs(int start){

    visited[start] = true;
    printf("%d ", start);
    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    sort(vec_array[start].begin(), vec_array[start].end());
    for(int i = 0; i < vec_array[start].size();i++)
    {
        if(!visited[vec_array[start][i]])
            dfs(vec_array[start][i]);
    }
    return;
}
void init()
{
    for(int i = 0;i<1001; i++)
    {
        visited[i] = false;
    }
    return;
}

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        visited[x] = true;
        printf("%d ", x);


        sort(vec_array[x].begin(), vec_array[x].end());
        for(int i =0 ;i<vec_array[x].size() ;i++)
        {
            int temp = vec_array[x][i];
            if(!visited[temp])
            {
                q.push(temp);
                visited[temp] = true;
            }
            
        }

    }
    return;

}
int main()
{
    int vertex = 0; // 1<= N<= 1000
    int edge = 0;   // 1<= M <= 10,000
    int start = 0;  // 탐색 시작하는 정점의 번호
    int temp1 = 0;
    int temp2 = 0;

    cin >> vertex;
    cin >> edge;
    cin >> start;

    for (int i = 0; i < edge; i++)
    {
        cin >> temp1;
        cin >> temp2;

        vec_array[temp1].push_back(temp2);
        vec_array[temp2].push_back(temp1);

    }
    dfs(start);
    init();
    printf("\n");
    bfs(start);

    return 0;
}