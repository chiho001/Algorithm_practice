#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec_test;
    vec_test.push_back(1);
    vec_test.push_back(2);
    vec_test.push_back(3);
    vec_test.push_back(4);
    vec_test.push_back(6);
    vector<int>::iterator it;
    it = upper_bound(vec_test.begin(),vec_test.end(),3);
    //it = lower_bound(vec_test.begin(),vec_test.end(),5);
    cout << *it;

    return 0;
}