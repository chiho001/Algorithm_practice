#include<iostream>
#include<vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    int P;
    int output=0;
    cin >> N;
    vector<int> vec;

    for(int i=0;i<N; i++)
    {
        cin >> P;
        vec.emplace_back(P);
    }
    sort(vec.begin(),vec.end());

    for(int i=0; i< N ; i++)
    {
        output += vec[i]*(N-i);
    }
    cout << output;
    return 0;
}