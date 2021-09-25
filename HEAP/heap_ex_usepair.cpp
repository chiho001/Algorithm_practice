#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int,int>>temp;
	temp.push(make_pair(3,100));
	temp.push(make_pair(-2,140));
	temp.push(make_pair(3,50));
	temp.push(make_pair(49,12));
	temp.push(make_pair(300,-20));

    int sz = temp.size();
    for(int i=0;i<sz; i++>)
    {
        cout << temp.top().first << ','<<temp.top().second<< endl;
        temp.pop();
    }
	

    	return 0;
}
	