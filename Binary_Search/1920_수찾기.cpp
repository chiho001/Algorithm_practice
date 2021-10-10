#include<iostream>
#include<vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned int N;
	unsigned int M;
	unsigned int mid;
	bool bOutput = 0;
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
    
	cin >> N;
	vector<int>A(N, 0);
	for (int i = 0; i < N;i++)
	{
		cin >> A[i];
	}
    sort(A.begin(),A.end());
    cin>>M;
    while(M--){
        int key; 
        cin>>key;
        if(binary_search(A.begin(), A.end(),key)) 
        {
            cout<<"1"<<"\n";
        }
        else
        { 
            cout<<"0"<<"\n";
        }
    }

}