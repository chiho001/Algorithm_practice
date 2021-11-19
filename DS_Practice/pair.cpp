#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<pair<int,int>> vec_pair;
    int n1=1;
    int n2=2;
    vec_pair.push_back(make_pair(n1,n2));

    cout << vec_pair[0].first << vec_pair[0].second;

    cout << endl;


    return 0;
}