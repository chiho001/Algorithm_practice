#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(9);
    q.push(5);
    int sz = q.size();

    for(int i=0;i<sz; i++)
    {
        cout << q.front() << ",";
        q.pop();
    }
    cout << '\n';

    priority_queue<int> pq;
    pq.push(1);
    pq.push(9);
    pq.push(5);
    sz = pq.size();
    for(int i=0;i<sz; i++)
    {
        cout << pq.top() <<",";
        pq.pop();
    }
    cout << '\n';

    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(1);
    pq.push(9);
    pq.push(5);
    sz = pq.size();

    for(int i=0;i<sz; i++)
    {
        cout << pq.top() <<',';
        pq.pop();
    }
    cout << '\n';

    return 0;
}