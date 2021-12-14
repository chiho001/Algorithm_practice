// 시간 제한	메모리 제한	제출	
// 1 초	           256 MB	
//문제
// LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.

// 예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lcs_length;

char ch_str_num1[1000];
char ch_str_num2[1000];

char dp[1001];

int main()
{

    cin >> ch_str_num1;
    cin >> ch_str_num2;

    // cout << lcs_length;
    // if(lcs_length!=0)
    //     cout << lcs;

    return 0;
}
//입력 
// 첫째 줄과 둘째 줄에 두 문자열이 주어진다. 문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다.
//출력
// 첫째 줄에 입력으로 주어진 두 문자열의 LCS의 길이를, 둘째 줄에 LCS를 출력한다.

// LCS가 여러 가지인 경우에는 아무거나 출력하고, LCS의 길이가 0인 경우에는 둘째 줄을 출력하지 않는다.

// 입력
//ACAYKP
//CAPCAK

// 출력
// 4
// ACAK