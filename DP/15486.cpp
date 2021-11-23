#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arr[1500000];
int dp[1500001] = { 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, ans = 0;
	int temp = 0;

	cin >> n;
	for (int i = 0; i < n; i++) 
    {
		cin >> arr[i].first >> arr[i].second;// first : time second : price
	}

	for (int i = 0; i < n; i++) 
    {
		temp = max(dp[i], temp);
		dp[i + arr[i].first] = max(dp[i + arr[i].first], max(temp + arr[i].second, dp[i] + arr[i].second));
	}

	for (int i = 0; i <= n; i++) 
    {
		ans = max(ans, dp[i]);
	}

	cout << ans << "\n";
}