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
vector<int> a[1001];
bool c[1001];
int vertex, edge, start;


void init() {
    for (int i = 0; i < 1001; i++)
    {
        c[i] = false;
    }
}

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    c[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        printf("%d ", x);
        for (int i = 0; i<a[x].size();i++) // node a가 연결되어있는 간선 개수만큼
        {
            sort(a[start].begin(), a[start].end());
            int y = a[x][i];
            if (!c[y]) //방문 여부 확인 
            {
                q.push(y); // 방문안했으면 push
                c[y] = true; // 방문!
            }

        }

    }

}
void dfs(int start)
{
    if (!c[start])
    {
        c[start] = true;
        int x = start;
        printf("%d ", start);
    }
    else
    {
        return;
    }
    for (int i = 0; i < a[start].size() ; i++)
    {
        sort(a[start].begin(), a[start].end());
        dfs(a[start][i]);
    }

}

int main()
{     
    vertex = 0; // 1<= N<= 1000
    edge = 0;   // 1<= M <= 10,000
    start = 0;  // 탐색 시작하는 정점의 번호
    int temp1 = 0;
    int temp2 = 0;

    cin >> vertex;
    cin >> edge;
    cin >> start;

    for (int i = 0;i < edge; i++)
    {
        cin >> temp1;
        cin >> temp2;

        a[temp1].push_back(temp2);
        a[temp2].push_back(temp1);

    }
    dfs(start);
    printf("\n");
    init();
    bfs(start);
    
    return 0;

}

