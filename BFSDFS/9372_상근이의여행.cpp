/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool visited[1001];

int bfs(vector<int>v[1001]) 
{
	queue<int>q;
	q.push(1);
	int ans = 0;
	while (!q.empty()) {
		int cur = q.front();	
		q.pop();
		if (!visited[cur]) 
        {	
			visited[cur] = true;
			ans++;
			for (int i = 0; i < v[cur].size(); i++)
            {
				int nextNode = v[cur][i];
				if (!visited[nextNode])	
				{
                    q.push(nextNode);
                }
			}
		}
	}
	return ans-1;
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,N,M;
    int temp_x,temp_y;
    
    cin >> T;

    for(int j=0;j<T;j++)
    {
        vector<int>vec_planes[1001];
        memset(visited, false, sizeof(visited));
        cin >> N;
        cin >> M;
        for(int i=0;i<M;i++)
        {
            cin >> temp_x;
            cin >> temp_y;
            vec_planes[temp_x].push_back(temp_y);
            vec_planes[temp_y].push_back(temp_x);
            
        }
        int ans=bfs(vec_planes);
	    cout << ans <<endl;
    }

    
    return 0;
}

