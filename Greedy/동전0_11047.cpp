#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Min_output : 필요한 동전 개수의 최소값 

int main()
{
    int N,SUM=0;
    int Min_output=0;

    cin >> N; // 1 ≤ N ≤ 10 , 준규가 가지고 있는 동전 N개 종류
    cin >> SUM; // 1 ≤ SUM ≤ 100,000,000 동전의 값의 합

    int temp;
    vector<int>arr(N);

    for(int i=0;i<N;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    vector<int>::iterator it = arr.begin();
    it = it+arr.size()-1;
    for(it;it>=arr.begin();--it)
    {
        if(*it > SUM)
            continue;
        int coin_temp = *it;
        int output_temp = SUM / coin_temp;
        SUM = SUM % coin_temp;
        Min_output += output_temp;
        if(SUM==0)
        {
            break;
        }


    }
    cout << Min_output;

	return 0;
}