#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int check(vector<int>&v1,vector<int>&v2)
{
    vector<int>::iterator it;
    sort(v1.begin(),v1.end());

    for(it=v2.begin();it!=v2.end();++it)
    {
        int start = 0;
        int end = v1.size();
        int mid;
        while (start <= end) {
            mid = (start + end)/2;
            if (v1[mid] == *it) {
                cout << "1 ";
                break;
            }
            else {
                if (v1[mid] > *it)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        if (v1[mid] != *it)
            cout << "0 ";
    }
    
    return 0; 
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    cin >> N;
    vector<int>v1;
    v1.reserve(N);
    for(int i=0;i<N;i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cin >> M;
    vector<int>v2;
    v2.reserve(M);
    for(int i=0;i<M;i++)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
   
    check(v1,v2);
    
    return 0;
}