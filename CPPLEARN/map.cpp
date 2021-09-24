#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<stack>

using namespace std;
int main()
{
    vector<int> v;
    queue<int> q;
    map<string,int> m;
    vector<int>::iterator v_iter;
    pair<int,string>p = make_pair(1,"chiho");
    stack<int> s;

    // for(int i=1;i<=5;i++)
    //     s.push(i);
    // while(!s.empty())
    // {
    //     int n = s.top();
    //     s.pop();
    //     cout << n << endl;
    // }
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // q.push(4);
    // q.push(5);
    // q.push(6);

    m.insert({"CHIHO",1});

    if(m.find("CHIHO")!=m.end()) // map find Function(m.find())-> IF NOT FOUND, THEN IT OUTPUTS m.end()
    {
        cout << "find" << endl;
    }
    else{
        cout << "not find" << endl;
    }
    //for (auto iter = m.begin() ; iter != m.end(); iter++) 
    for(auto iter : m)
    { 
        cout << iter.first << " " << iter.second << endl; 
    } 
    cout << endl;


    // cout << p.first <<" "<< p.second<<endl;


    // for(v_iter=v.begin();v_iter!=v.end();v_iter++)
    // {
    //     cout << *v_iter;
    // }
    // cout << endl;
    // while(!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }


    return 0;
}