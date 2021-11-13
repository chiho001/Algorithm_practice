// 입력
// 첫째 줄에 회의의 수 N(1 ≤ N ≤ 100,000)이 주어진다. 
// 둘째 줄부터 N+1 줄까지 각 회의의 정보가 주어지는데 , 이것은 공백을 사이에 두고 회의의 시작시간과 끝나는 시간이 주어진다 
// 시작 시간과 끝나는 시간은 2^31 - 1보다 작거나 같은 자연수 또는 0이다.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Num_meeting= 0; // 회의의 수 N(1 ≤ N ≤ 100,000)
    int max_meeting_num = 1;
    int end,begin;
    cin >> Num_meeting;
    vector<pair<int,int>> schedule;
    
    for(int i=0; i<Num_meeting; i++)
    {
        cin >> begin >> end;
        schedule.push_back(make_pair(end,begin));
    }
    
    sort(schedule.begin(),schedule.end());

    int time = schedule[0].first;
	for (int i = 1 ;i < Num_meeting; i++) 
	{
		if (time <= schedule[i].second)
		{
			max_meeting_num++;
			time = schedule[i].first;
		}
	}


    cout << max_meeting_num;



    return 0;
}

