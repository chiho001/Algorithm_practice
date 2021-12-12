#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dp[1000000];

int main()
{
    int int_input;
    int output = 0;
    
    cin >> int_input;
    int temp = int_input;
    dp[1] = 0;
    for(int i=2;i<=int_input;i++)
    {
        dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
			dp[i] = dp[i / 2] + 1;
		}
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
			dp[i] = dp[i / 3] + 1;
		}

        
    }
    cout << dp[int_input];

    return 0;
}