#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int direct[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
vector<vector<int>> Map;

void BFS() 
{
	queue<pair<int, int>> Q;

	Q.push(make_pair(0, 0));

	while (!Q.empty()) {
		pair<int, int> know = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int n = know.first + direct[i][0];
			int m = know.second + direct[i][1];

			if (0 <= n && n < N && 0 <= m && m < M && Map[n][m] == 1) {
				Q.push(make_pair(n, m));
				Map[n][m] = Map[know.first][know.second] + 1;
			}
		}

	}

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M,temp,output;
    cin >> N >> M;
    vector<int> tmap;
    int temp;

	for (int i = 0; i < N; i++) {	
		for (int j = 0; j < M; j++) {
			cin >> temp;
			tmap.push_back(temp);
		}
		Map.push_back(tmap);
	}
    BFS();

    cout << Map[N - 1][M - 1] << endl;

    return 0;
}