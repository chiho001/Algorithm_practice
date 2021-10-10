#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    unsigned int N;
    cin >> N;
    int temp;
    priority_queue< int,vector<int>,greater<int> >pq;

    for(int i=0;i<N; i++)
    {
        cin >> temp;
        if(temp == 0)
        {
            if(!pq.empty())
            {
                int output = pq.top();
                cout << output<<'\n'; // endl은 왠만하면 시간 초과할때 걸리니까 쓰지말자..
                pq.pop();
            }
            else
                cout << "0"<<'\n';
        }
        else
        {
            pq.push(temp);

        }

    }

    return 0;
}