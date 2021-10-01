#include<bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,N,output,first;
    cin >> N;
    priority_queue<int> pq;
    for(int i=0;i<N;i++)
    {
        cin >> x;
       
        if(x<0)
        {
        
        }
        else if(x==0)
        {
            if(!pq.empty())
            {
                output = pq.top();
                pq.pop();
                cout << output << '\n';
            }
            else
            {
                cout << "0" << '\n';
            }
        }
        else
        {
            pq.push(x);
        }
        
    }


    return 0;

}