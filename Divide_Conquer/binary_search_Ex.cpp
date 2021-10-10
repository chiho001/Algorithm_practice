#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool binary_search(int N,vector<int>& S)
{
    auto first = S.begin();
    auto last = S.end();

    while(true)
    {
        //현 검색 범위의 중간 원소를 mid_element에 저장
        auto range_length = std::distance(first,last);
        auto mid_element_index = first + std::floor(range_length/2);
        auto mid_element = *(first + mid_element_index);

        //mid_element와 N값을 비교
        if(mid_element == N)
            return true;
        else if(mid_element > N)
            advance(last,-mid_element_index);
        if(mid_element<N)
            advance(first,mid_element_index);
        //현재 검색 범위에 하나의 원소만 남아있다면 false를 반환
        if(range_length==1)
            return false;
    }

}
void run_small_search_test()
{
    auto N = 2;
    vector<int> S{1,3,2,4,5,7,9,8,6};

    sort(S.begin(),S.end());

    if(binary_search(N,S))
        cout << "Find Element with b.s" <<endl;
    else
        cout << "Not Found with b.s" <<endl;
}
int main()
{
    run_small_search_test();

    return 0;
}